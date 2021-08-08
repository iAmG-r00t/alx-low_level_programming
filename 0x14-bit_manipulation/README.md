# 0x14. C - Bit manipulation 

![img](../.imgs/bit_manipulation.png)

## Resource

- [Number Systems Introduction](https://www.youtube.com/watch?v=FFDMzbrEXaE&t=2s)
- [How to add and minus binary numbers](https://youtu.be/C5EkxfNEMjE)
- [Binary ..](https://youtu.be/RrJXLdv1i74)
- [Binary Addition and Subtraction With Negative Numbers](https://youtu.be/sJXTo3EZoxM)
- [Bitwise Operators in C part 1](https://youtu.be/jlQmeyce65Q)
- [Bitwise Operators in C part 2](https://youtu.be/8aFik6lPPaA)
- [Bitwise Operators in C part 3](https://youtu.be/GhhJP6vpEA8)
- [Bitwise Operators in C part 4](https://youtu.be/kYR5biY4OHw)
- [Algorithms: Bit Manipulation](https://youtu.be/NLKQEOgBAnw)

---

- Below are some notes on `~`, `>>` and `<<` bitwise operators.

- NOT operator `~`
	- Result is `0` when bit is `1` and `1` when bit is `0`

- Right Shift `>>`
	- `leftOperand` >> `rightOperand`
		- leftOperand: whose bits get right shifted
		- rightOperand: Decides number of places to shift the bits
		- Example: `0x02 >> 1` = `0x01`
	- When bits are shifted right the leading positions are filled with zeros
	- It is equivalent to division by 2<sup>rightOperand</sup>
		- Example: `0x02` >> `1` == `0x02` / 2<sup>1</sup>

- Left Shift `<<`
	- `leftOperand` << `rightOperand`
		- leftOperand: whose bits get right shifted
		- rightOperand: Decides number of places to shift the bits
		- Example: `0x01 << 1` = `0x02`
	- When bits are shifted left the trailing positions are filled with zeros
	- It is equivalent to multiplication by 2<sup>rightOperand</sup>
		- Example: `0x01` << `1` == `0x01` / 2<sup>1</sup>

## Tasks

0. [0](./0-binary_to_uint.c) : A function that converts a binary number to an `unsigned int`.
	- Prototype: `unsigned int binary_to_uint(const char *b);`
	- Where `b` is pointing to a string of `0` and `1` chars.
	- Return: the converted number, or 0 if
		- there is one or more chars in the string `b` that is not `0` or `1`
		- `b` is `NULL`
	- To enable debug mode that will print statements of what is happening add this `-D DEBUG` at the end of the compile line.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-binary_to_uint.c -o a`
1. [1](./1-print_binary.c) : A function that prints the binary representation of a number.
	- Prototype: `void print_binary(unsigned long int n);`
	- Format: see below.
		```sh
		julien@ubuntu:~/0x14. Binary$ ./b 
		0
		1
		1100010
		10000000000
		10000000001
		julien@ubuntu:~/0x14. Binary$
		```
	- You are not allowed to use arrays.
	- You are not allowed to use `malloc`
	- You are not allowed to use the `%` or `/` operators.
	- To enable debug mode that will print statements of what is happening add this `-D DEBUG` at the end of the compile line.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-print_binary.c _putchar.c -o b`
