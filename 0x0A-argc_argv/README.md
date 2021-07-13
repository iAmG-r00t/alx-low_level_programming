# 0x0A. C - Argc, argv

## Resource

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [How to compile with unused variables](https://www.google.com/webhp?q=unused+variable+C)

## Tasks

0. [It ain't what they call you, it's what you answer to](./0-whatsmyname.c) : A program that prints its name, followed by a new line.
	- If you rename the program, it will print the new name, without having to compile it again.
	- You should not remove the path before the name of the program.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis`
1. [Silence is argument carried out by other means](./1-args.c) : A program that prints the number of arguments passed into it.
	- Your program should print a number, followed by a new line.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs`
2. [The best argument against democracy is a five-minute conversation with the average voter](./2-args.c) : A program that prints all the arguments it receives.
	- All arguments should be printed, including the first one.
	- Only print one argument per line, ending with a new line.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args`
