#!/bin/bash
gcc -c *.c
gcc -rc liball.a *.o
ranlib liball.a
