#!/usr/bin/env bash
set -euo pipefail
if [[ $# != 1 ]]; then
  echo 'Usage: ./generate.sh <full OpenHD/mavlink commit SHA>' >&2
  exit 2
fi
exec python3 "$(dirname "$0")/generate.py" "$1"
