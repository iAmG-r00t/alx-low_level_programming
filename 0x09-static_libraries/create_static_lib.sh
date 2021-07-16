#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

filename = "liball.a" # static library filename

gcc -c *.c # compile all our .c files
ar rc "$filename" *.o # create our static library
echo y | rm -I *.o # remove all object files
ar -t "$filename" # confirm our static library was created
nm "$filename" # confirm all our functions were linked correctly
