# 0x00. C -Hello, World

## Resources

- C [Books and PDF's](../references) to check out and use as a reference.
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie) creator of C.
- "C" Programming Language: Brian Kernighan - [Computerphile](https://www.youtube.com/watch?v=de2Hsvxaf8M).
- Learning to Program in C by Jonathan Engelsma [Youtube Playlist](https://youtube.com/playlist?list=PLIsXzR_wZY-yQMHOK7D3Dls4VoTGuRovd)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA).
- [Holberton Betty Guide](https://github.com/holbertonschool/Betty/wiki) C coding style.
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21).
- [Linus Torvalds on C vs C++](http://harmful.cat-v.org/software/c++/linus).
- [UPEvent: GCC and Makefiles](https://youtu.be/OnEF1MexJlI) **Important watch this**

## Tasks

0. [Preprocessor](./0-preprocessor) : A script that runs a C code file through the preprocessor and save the result into another file.
   - The C file name will be saved in the variable *[$CFILE](./main.c)*.
   - The output should be saved in the file `c`.
   - Export main c file : `export CFILE=main.c` then run script.
1. [Compiler](./1-compiler) : A script that compiles a C code file but does not link.
   - The C file name will be saved in the variable *[$CFILE](./main.c)*.
   - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    - **Example:** if the C file is `main.c`, the output file should be `main.o`.
2. [Assembler](./2-assembler) : A script that generates the assembly code of a C code and save it in an output file.
   - The C file name will be saved in the variable *[$CFILE](./main.c)*.
   - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`
    - **Example:** if the C file is `main.c`, the output file should be `main.s`.
3. [Name](./3-name) : A script that compiles a C file and creates an executable named `cisfun`.
   - The C file name will be saved in the variable *[$CFILE](./main.c)*.
4. [Hello, puts](./4-puts.c) : A C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
    - Use the function `puts`.
    - You are not allowed to use `printf`.
    - Your program should end with the value `0`.
	- Compile and run this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out`.
5. [Hello, printf](./5-printf.c) : A C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
	- Use the funtion `printf`.
	- You are not allowed to use the funtion `puts`.
	- Your program should return `0`.
	- Your program should compile without warning when using the `-Wall` `gcc` option.
	- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c`.
	- Run the `a.out` executable file.
6. [Size is not grandeur, and territory does not make a nation](./6-size.c) : A C program that prints the size of various types on the computer it is compiled and run on.
	- You should produce the exact same output as in the example.
	- Warnings are allowed.
	- Your program should return `0`.
	- You might have to install the package `libc6-dev-i386` on your linux (Vagrant) to test the `-m32` `gcc` option.
	- Compile this way: `gcc 6-size.c -m32 -o size32 2> /tmp/32` & `gcc 6-size.c -m64 -o size64 2> /tmp/64`
	- Compare outputs for the `size32` and `size64`.
7. [Intel](./100-intel) : A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
	- The C file name will be saved in the variable *[$CFILE](./main.c)*.
	- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
		- **Example:** if the C file is `main.c`, the output file should be `main.s`.
8. [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](./101-quote.c) : A C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
	- You are not allowed to use any funtions listed in the NAME section of the man (3) `printf` or man (3) `puts`.
	- Your program should return 1.
	- Your program should compile without any warnings when using the `-Wall` `gcc` option.
	- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c`.
	- Run the `quote` executable file.
