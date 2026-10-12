#!/usr/bin/env python3
"""Regenerate from an explicitly pinned OpenHD/mavlink commit."""
import argparse
import json
import pathlib
import shutil
import subprocess
import tempfile

root = pathlib.Path(__file__).resolve().parent
p = argparse.ArgumentParser(description=__doc__)
p.add_argument('revision', help='Full 40-character XML repository commit SHA')
a = p.parse_args()
if len(a.revision) != 40 or any(c not in '0123456789abcdef' for c in a.revision):
    p.error('A full immutable commit SHA is required')
def run(*args, cwd=None):
    return subprocess.run(args, cwd=cwd, check=True, text=True)
with tempfile.TemporaryDirectory(prefix='openhd-mavlink-') as tmp:
    source = pathlib.Path(tmp) / 'source'
    run('git', 'clone', '--no-checkout', 'https://github.com/OpenHD/mavlink.git', str(source))
    run('git', 'checkout', '--detach', a.revision, cwd=source)
    run('git', 'submodule', 'update', '--init', '--recursive', cwd=source)
    run('bash', 'scripts/generate_openhd_headers.sh', cwd=source)
    run('python3', 'scripts/check_openhd_wire.py', str(root / 'mavlink/v2.0'), cwd=source)
    shutil.copytree(source / 'generated/include/mavlink', root / 'mavlink', dirs_exist_ok=True)
    shutil.copytree(source / 'generated/wire', root / 'wire', dirs_exist_ok=True)
    generator = subprocess.check_output(['git', '-C', str(source / 'pymavlink'), 'rev-parse', 'HEAD'], text=True).strip()
    (root / 'source.json').write_text(json.dumps(dict(repository='https://github.com/OpenHD/mavlink',
        revision=a.revision, generatorRevision=generator, wireProtocol='2.0'), indent=2)+'\n')
