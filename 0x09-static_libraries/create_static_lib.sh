#!/bin/bash
gcc -pedantic -std=gnu89 -c ./*.c
ar rc liball.a ./*.c
ranlib liball.a
