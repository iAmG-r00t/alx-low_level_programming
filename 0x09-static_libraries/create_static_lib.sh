#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

filename = "liball.a" # static library filename

# compile all our .c files
gcc -c *.c
# create our static library
ar rc "$filename" *.o
# remove all object files
echo y | rm -I *.o
# confirm our static library was created
ar -t "$filename"
# confirm all our functions were linked correctly
nm "$filename"
