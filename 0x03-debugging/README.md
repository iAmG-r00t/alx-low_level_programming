# 0x03. C - Debugging

## Resources

- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)
	- [Piaget's theory of cognitive development](https://en.wikipedia.org/wiki/Piaget's_theory_of_cognitive_development)

## Tasks

0. [Multiple mains](./0-main.c) : This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`.
	- For this task its not about coding the solution / function but testing it. For this task I will adapt the [positive_or_negative](../0x01-variables_if_else_while/0-positive_or_negative.c) C program file as a prototype function that I learnt from the previous topic [Functions and nested loops](../0x02-functions_nested_loops).
	- For this challenge we are not allowed to add or remove lines of code, we may only change one line in this task.
	- Use this [positive_or_negative.c](./positive_or_negative.c) C program file to compile the code, expected output is `0 is zero`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main`
1. [Like, comment, subscribe](./1-main.c) : A C program where I have commented the areas of code that were causing the output to go into an infinite loop.
	- No need to compile the code with `-Wall -Werror -Wextra -pedantic` for this task.
	- Compile the code this way: `gcc -std=gnu89 1-main.c -o 1-main`
2. [0 > 972](./2-main.c) : A C program that prints the largest of three integers.
	- For this task we are given the main C program file that utilizes a function prototype called [2-largest_number](./2-largest_number_original.c), where when the code compiled and executed it shows `0` to be the largest number from our main program file which shouldn't be the case.
	- We are tasked to fix the prototype function code. This is the [2-largest_number](./2-largest_number.c) prototype function code that works correctly.
	- Compile the code this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main`
