#!/bin/bash
gcc -c -O ./*.c
ar rc liball.a ./*.c
ranlib liball.a
