# 0x01. C - Variables,if,else,while

## Resources

- C [Books and PDF's](../references) to check out and use as a reference.
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html).
- [Integral types](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html).
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm).
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html).
- [C - if...else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm).
- [Relational Operators in C](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm).
- [C - Logical Operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/).
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm).
- [While Loop](https://youtu.be/Ju1LYO9pkaI) Youtube Video.

## Tasks

0. [Positive anything is better than negative nothing](./0-positive_or_negative.c) : A C program that will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
	- [Source Code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
	- The variable `n` will store a different value everytime you will run this program.
	- You don't have to understand what `rand`, `srand`, `RAND_MAX` do.
	- The output of the program should be:
		- The number, followed by
			- if the number is greater than 0: `is positive`
			- if the number is 0: `is zero`
			- if the number is less than 0: `is negative`
		- Followed by a new line.
1. [The last digit](./1-last_digit.c) : A C program that will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
	- [Source Code](./https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
	- The variable `n` will store a different value everytime you will run this program.
	- You don't have to understand what `rand`, `srand`, `RAND_MAX` do.
	-  The output of the program should be:
		- The string `Last digit of`, followed by
		- `n`, followed by
		- The string `is`, followed by
			- If the last digit of `n` is greater than 5: the string `and is greater than 5`.
			- If the last digit of `n` is 0: the string `and is 0`.
			- If the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`.
2. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./2-print_alphabet.c) : A C program that prints the alphabet in lowercase, followed by a new line.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` twice in your code.
3. [alphABET](./3-print_alphabets.c) : A C program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` three times in your code.
4. [When I was having that alphabet soup, I never thought that it would pay off](./4-print_alphabt.c) : A C program that prints the alphabet in lowercase, followed by a new line.
	- Print all the letters except `q` and `e`.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` twice in your code.
5. [Numbers](./5-print_numbers.c) : A C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
	- All your code should be in the main function.
6. [Numberz](./6-print_numberz.c) : A C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
	- You are not allowed to use any variable of type `char`.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- You can only use `putchar` twice in your code.
	- All your code should be in the main function.
7. [Smile in the mirror](./7-print_tebahpla.c) : A C program that prints the lowercase alphabet in reverse, followed by a new line.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` twice in your code.
	- I have two solutions for this, one which is the main one using a while loop, while the [second one](./7-print_tebahpla.2.c) uses a for loop.