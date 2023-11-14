#!/bin/bash
wget -P .. https://raw.githubusercontent.com/EzzagmounyAZIZ/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD8PRELOAD="$PWD/../libhack.so"
