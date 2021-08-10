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
3. [cp](./3-cp.c) A program that copies the content of a file to another file.
	- Usage: `cp file_from file_to`
	- If the number of argument is not the correct one, exit with code `97` and print `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error.
	- If `file_to` already exists, truncate it.
	- If `file_from` does not exist, or if you can not read it, exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
		- Where `NAME_OF_THE_FILE` is the second argument passed to your program.
	- If you can not create or if `write` to `file_to` fails, exit with code `99` and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
		- Where the `NAME_OF_THE_FILE` is the second argument passed to your program.
	- If you can not close a file descriptor , exit with code `100` and print `Error: Can't close fd FD_VALUE`, followed by a new line, on the `POSIX` standard error.
		- Where `FD_VALUE` is the value of the file descriptor.
	- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions.
	- You must read `1,024` bytes at a time from the `file_from` to make less system calls. Use a buffer.
	- You are allowed to use `dprintf`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp`
	- To run the program, follow below steps:
		- View contents of file to copy from: `cat main/incitatous`
		- Copy file to new file: `./cp main/incitatous Incitatous`
		- Confirm if file has been created: `ls -l Incitatous`
		- Confirm contents: `cat Incitatous`
4. [elf](./100-elf_header.c) : A program that displays the information contained in the `ELF` header at the start of an `ELF` file.
	- Usage: `elf_header elf_filename`
	- Displays the following information: (**no less, no more, do not include trailing whitespace**)
		- Magic
		- Class
		- Data
		- Version
		- OS/ABI
		- ABI Version
		- Type
		- Entry point address
	- Format: the same as `readelf -h` (version `2.26.1`)
	- If the file is not an `ELF` file, or on error, exit with status code `98` and display a comprehensive error message to `stderr`
	- You are allowed to use `lseek` once
	- You are allowed to use `read` a maximum of 2 times at runtime
	- You are allowed to to have as many functions as you want in your source file.
	- You are allowed to use `printf`
	- man `elf`, `readelf` will give you details on the functions they use and struct type.
	- Compile the code this way: ``
	- Confirm if the code is running by following the below steps:
		- Run `readelf` first with the `--header` / `-h` option:
			```sh
			 [main !?] root@0331426d386b : [ ~/alx-low_level_programming/0x15-file_io ] 
			 $ readelf -h /lib/ld-linux.so.2
			 ELF Header:
			 Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00 
			 Class:                             ELF32
			 Data:                              2's complement, little endian
			 Version:                           1 (current)
			 OS/ABI:                            UNIX - System V
			 ABI Version:                       0
			 Type:                              DYN (Shared object file)
			 Machine:                           Intel 80386
			 Version:                           0x1
			 Entry point address:               0x1120
			 Start of program headers:          52 (bytes into file)
			 Start of section headers:          178660 (bytes into file)
			 Flags:                             0x0
			 Size of this header:               52 (bytes)
			 Size of program headers:           32 (bytes)
			 Number of program headers:         10
			 Size of section headers:           40 (bytes)
			 Number of section headers:         26
			 Section header string table index: 25
			```
		- Then confirm with your compiled program:
			```sh
			[main !?] root@0331426d386b : [ ~/alx-low_level_programming/0x15-file_io ] 
			$ ./elf_header /lib/ld-linux.so.2 
			ELF Header:
			Magic    7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00
			Class:                             ELF32
			Data:                              2's complement, little endian
			Version:                           1 (current)
			OS/ABI:                            UNIX - System V
			ABI Version:                       0
			Type:                              DYN (Shared object file)
			Entry point address:               0x1120
			```
		- Other resources to use:
			- [ELF: Behind the process](https://www.cs.swarthmore.edu/~kwebb/cs31/s15/bucs/elf.html)
			- [Executable and Linkable Format](https://en.wikipedia.org/wiki/Executable_and_Linkable_Format)
			- [Elf from scratch](https://www.conradk.com/codebase/2017/05/28/elf-from-scratch/)
			- [Exploring ELF](https://www.suchprogramming.com/exploring-elf/)
			- [The 101 of ELF files on Linux: Understanding and Analysis](https://linux-audit.com/elf-binaries-on-linux-understanding-and-analysis/#elf-header)
			- [Elf file structure](https://metabytezero.blogspot.com/2019/10/elf-file-structure.html)
			- [Linux Foundation Specs: ELF Header](https://refspecs.linuxfoundation.org/elf/gabi4+/ch4.eheader.html)
			- [Linux man-pages v5 elf](https://man7.org/linux/man-pages/man5/elf.5.html)
