#!/bin/bash
wget -P ../ https://github.com/meta-bay/alx-low_level_programming/raw/main/0x18-dynamic_libraries/injectlib.so
export LD_PRELOAD=../injectlib.so
