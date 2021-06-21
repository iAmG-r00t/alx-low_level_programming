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
	- This [ASCII](https://ascii.cl/) table will help you understand my solution.
		- For this you need to understand that `putchar` holds the ASCII value of a variable.
			- So we add `0 == 48` 48 is the ASCII value to our single digit integer to convert it into its character representation.
			- Better explanation [here](https://stackoverflow.com/questions/21255038/what-does-putchar0-num-do)
7. [Smile in the mirror](./7-print_tebahpla.c) : A C program that prints the lowercase alphabet in reverse, followed by a new line.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` twice in your code.
	- I have two solutions for this, one which is the main one using a while loop, while the [second one](./7-print_tebahpla.2.c) uses a for loop.
8. [Hexadecimal](./8-print_base16.c) : A C program that prints all the numbers os base 16 in lowercase, followed by a new line.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` three times in your code.
	- I have another solution [here](./8-print_base16.2.c), you can check it out.
	- This [ASCII](https://ascii.cl/) table will help you understand the second solution.
		- So for the second solution, you need to understand that `putchar` will store the ASCII value of the variable, always **REMEMBER** that.
9. [Patience, persistence and perspiration make an unbeatable combination for success](./9-print_comb.c) : A C program that prints all possible combinations of single-digit numbers.
	- Numbers must be separated by `,`, followed by a space.
	- Numbers should be printed in ascending order: `lowest - highest`.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- All your code should be in the `main` function.
	- You can only use `putchar` four times in your code.
	- You are not allowed to use variable any variable of type `char`.
10. [Inventing is a combination of brains and materials. The more brains you use, the less material you need](./100-print_comb3.c) : A C program that prints all possible different combinations of two digits.
	- Numbers must be separated by `,`, followed by space.
	- Two digits must be different.
	- `01` and `10` are considered the same combination of the two digits `0` and `1`.
	- Print only the smallest combination of two digits.
	- Numbers should be printed in ascending order, with two digits.
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- You can only use `putchar` five times maximum in your code.
	- You are not allowed to use variable any variable of type `char`.
	- All your code should be in the `main` function.
	- Second [solution](./100-print_comb3.2.c) is here using a while loop, while my first solution I am using a for loop.
11. [The success combination in business is: Do what you do better... and: do more of what you do... ](./101-print_comb4.c) : A C program that prints all possible different combinations of three digits.
	- Numbers must be separated by `,`, followed by space.
	- The three digits must be different.
	- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`.
	- Print only the smallest combination of three digits
	- Numbers should be printed in ascending order, with three digits
	- You can only use the `putchar` function (every other function(`printf`, `puts`, etc ..) is forbidden).
	- You can only use `putchar` six times maximum in your code.
	- You are not allowed to use variable any variable of type `char`.
	- All your code should be in the `main` function.
