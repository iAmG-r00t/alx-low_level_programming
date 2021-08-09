# 0x15. C - File I/O

## Resource

- [File descriptor](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)

## Tasks

- All `*-main.c` files are in the [main](./main) directory.

---

0. [Tread lightly, she is near](./0-read_textfile.c) : A function that reads a text file and prints it to the `POSIX` standard output.
	- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
	- Where letters is the number of letters it should read and print.
	- Returns the actual number of letters it could read and print.
	- If the file can not be opened or read, return `0`.
	- If `filename` is `NULL` return `0`
	- If `write` fails or does not write the expected amount of bytes, return `0`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-read_textfile.c -o a`
	- Run this way: `./a main/Requiescat`
1. [Under the snow](./1-create_file.c) : A function that creates a file.
	- Prototype: `int create_file(const char *filename, char *text_content);`
	- Where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file.
	- Returns: `1` on success, `-1` on faliure (file can not be created, file can not be written, `write` "fails", etc)
	- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
	- If the file already exists, truncate it.
	- If `filename` is `NULL` return `-1`
	- If `text_content` is `NULL` create an empty file.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-create_file.c -o b`
	- Run this way: `./b hello world` OR `./b hello "you own this world"`
		- Confirm file permissions: `ls -l hello`
		- Confirm file contents: `cat hello`
		- You can try to run this way `./b hello "Is the previous data present"` to confirm the truncate bit.
2. [Speak gently, she can hear](./2-append_text_to_file.c) : A function that appends text at the end of a file.
	- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
	- Where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file.
	- Return: `1` on success and `-1` on faliure.
	- Do not create the file if it does not exist.
	- If `filename` is `NULL` return `-1`
	- If `text_content is `NULL`, do not add anything to the file.
	- Return `1` if the file exists and `-1` if the file does not exit or if you do not have the required permissions to write the file.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-append\_text\_to\_file.c -o c`
	- Run the following to text the program:
		- Create `hello` file: `echo -n Hello > hello`
		- Confirm file was created: `ls -l hello`
		- View contents of our `hello` file: `cat hello`
		- Run this way: `./c hello " World!
		"`
		- View contents again: `cat hello`
		- On the same file you can try and see if we pass no text if the file will change: `./c hello ""`
