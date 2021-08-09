# 0x15. C - File I/O

## Resource

- [File descriptor](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)

## Tasks

0. [Tread lightly, she is near](./0-read_textfile.c) : A function that reads a text file and prints it to the `POSIX` standard output.
	- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
	- Where letters is the number of letters it should read and print.
	- Returns the actual number of letters it could read and print.
	- If the file can not be opened or read, return `0`.
	- If `filename` is `NULL` return `0`
	- If `write` fails or does not write the expected amount of bytes, return `0`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-read_textfile.c -o a`
	- Run this way: `a main/Requiescat`
