#!/bin/bash
gcc -c *.c -fpic
gcc -shared *.c -o libdynamic.so
export LD_LIBRARY_PATH=.:$LD_LIBRARYPATH
