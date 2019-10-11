#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rcs libholberton.a *.o
