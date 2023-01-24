# mavlink-headers
Generated mavlink headers for openhd

Here are the headers generated by "compiling"

https://github.com/OpenHD/mavlink

using the "openhd" flavour.

# Explanation why:

Even though this requires some manual maintenance (REMEMBER: If you do any changes to our custom mavlink headers in the main fork, you have to then remember to update this repo ) we decided to use this workflow since the "compilation" of mavlink (aka compiling .xml into .h) just creates annoying issues
on different platforms due to its python dependencies.
This way, you only have to deal with this if you are the one actually doing changes to the openhd mavlink messages.

