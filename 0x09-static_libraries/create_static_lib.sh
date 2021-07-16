#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

filename = "liball.a" 

gcc -c *.c
ar rc "$filename" *.o
echo y | rm -I *.o
