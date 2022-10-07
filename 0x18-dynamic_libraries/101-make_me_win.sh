#!/bin/bash
wget -q -O .. https://raw.githubusercontent.com/Linco9ine/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD="$PWD/../nrandom.so"
