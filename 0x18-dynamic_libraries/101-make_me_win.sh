#!/bin/bash
wget -p /tmp https://github.com/EzzagmounyAZIZ/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libgiga.so
