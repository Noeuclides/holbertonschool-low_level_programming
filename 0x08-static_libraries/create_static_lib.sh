#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rct liball.a *.o
