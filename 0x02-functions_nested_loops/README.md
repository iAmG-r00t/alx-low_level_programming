# 0x02. C - Functions, nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
- C [Books and PDF's](../references) to check out and use as reference.

## Tasks

- **Note** for all these challenges we will not be using global variables and any standard library.
- We will be using function prototypes that will be included in our header file called, [holberton.h](./holberton.h).

---

0. [\_putchar](./0-holberton.c) : A C program that prints `Holberton`, followed by a new line.
	- The program should return `0`.
	- In this task we will be using prototype of funtion [\_putchar](./_putchar.c).
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-holberton.c -o 0-holberton`
1. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./1-alphabet.c) : A C program function that prints the alphabet, in lowercase, followed by a new line.
	- Prototype: `void print_alphabet(void);`.
	- You can only use `_putchar` twice in your code.
	- Use this [main.c](./1-main.c) C program file to check if the code works correctly.
	- Run the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet`
2. [10 x alphabet](./2-print_alphabet_x10.c) : A C program function that prints the alphabet, in lowercase, followed by a new line.
	- Prototype: `void print_alphabet_x10(void);`.
	- You can use `_putchar` twice in your code.
	- Use this [main.c](./2-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10`
3. [islower](./3-islower.c) : A C program function that checks for lowercase character.
	- Prototype: `int _islower(int c);`.
	- Return `1` if `c` is lowercase.
	- Returns `0` otherwise.
	- **FYI:** The standard library provides a similar function: `islower`. Run `man islower` to learn more.
	- Use this [main.c](./3-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower`
4. [isalpha](./4-isalpha.c) : A C program function that checks for alphabetic character.
	- Prototype: `int _isalpha(int c);`
	- Returns `1` if `c` is a letter, lowercase or uppercase.
	- Returns `0` otherwise.
	- **FYI:** The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.
	- Use this [main.c](./4-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha`
5. [Sign](./5-sign.c) : A C program function that prints the sign of a number.
	- Prototype: `int print_sign(int n);`
	- Return `1` and prints `+` if `n` is greater than zero.
	- Return `0` and prints `0` if `n` is zero.
	- Return `-1` and prints `-` if `n` is less than zero.
	- Use this [main.c](./5-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign`
6. [There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](./6-abs.c) : A C program function that will compute the absolute value of an integer.
	- Prototype: `int _abs(int);`
	- **FYI:** The standard library provides a similar function: `abs`. Run `man abs` to learn more.
	- Use this [main.c](./6-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs` 
7. [There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](./7-print_last_digit.c) : A C program function that will print the last digit of a number.
	- Prototype: `int print_last_digit(int);`
	- Returns the value of the last digit.
	- Use this [main.c](./7-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit`
8. [I'm federal agent Jack Bauer, and today is the longest day of my life](./8-24_hours.c): A C program function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
	- Prototype: `void jack_bauer(void);`
	- You can listen to this [soundtrack](https://www.youtube.com/watch?v=btAfXqgMkPs) while coding :)
	- Use this [main.c](./8-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24`
9. [Learn your times table](./9-times_table.c) : A C program function that prints the 9 times table, starting with 0.
	- Prototype: `void time_table(void);`
	- Comiple and run the code this way: `./9-times_table | cat -e` to see the format.
	- Use this [main.c](./9-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table`
10. [a+b](./10-add.c) : A C program function that adds two integers and returns the result.
	- Prototype: `int add(int, int);`
	- Use this [main.c](./10-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add`
11. [Holberton School, 98 Battery Street, the OG](./11-print_to_98.c) : A C program function that prints all natural numbers from `n` to `98`, followed by a new line.
	- Prototype: `void print_to_98(int n);`
	- Numbers must be separated by a comma, followed by a space.
	- Numbers should be printed in order.
	- The first number should be the number passed to your function.
	- The last printed number should be `98`.
	- You are allowed to use the standard library.
	- Use this [main.c](./11-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98`
