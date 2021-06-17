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
