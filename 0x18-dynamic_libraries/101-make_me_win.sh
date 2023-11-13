#!/bin/bash
wget -P ../ https://github.com/meta-bay/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=LD_PRELOAD=/$PWD/libinject.so