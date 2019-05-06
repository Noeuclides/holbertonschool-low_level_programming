#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c && ld -o liball.so *.o -shared 
