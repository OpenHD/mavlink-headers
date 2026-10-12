# OpenHD MAVLink headers

Generated from the XML and pinned pymavlink revision recorded in `source.json`.
Do not modify generated C headers or `wire/` descriptors by hand.

Regenerate on Linux/WSL with Python 3, future and lxml installed:

```sh
bash generate.sh <full-40-character-OpenHD/mavlink-commit>
```

This fetches the exact source and generator, checks published wire layouts,
and publishes both C headers and C++/TypeScript/C# descriptors. Client copies
are synchronized with OpenHD/mavlink `scripts/sync_openhd_wire.py`.
See [dialect and upstream review](https://github.com/OpenHD/mavlink/blob/openhd/docs/openhd-upstream.md).

Message 1231 corrects a historical manually entered CRC (177 to 178).
Upgrade the OpenHD receiver before QOpenHD; the new receiver accepts legacy
CRC-177 clients. All other published message CRCs/layouts remain unchanged.
