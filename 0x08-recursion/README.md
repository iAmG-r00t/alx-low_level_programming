# 0x08. C - Recursion

## Resource

- [0x08. Recursion, introduction](../references/Recursion.pdf)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory.

---

0. [She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](./0-puts_recursion.c) : A function that prints a string, followed by a new line.
	- Prototype: `void _puts_recursion(char *s);`
	- **FYI:** The standard library provides a similar function: `puts`. Run `man puts` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/0-main.c 0-puts_recursion.c -o 0-puts_recursion`
1. [Why is it so important to dream? Because, in my dreams we are together](./1-print_rev_recursion.c) : A function that prints a string in reverse.
	- Prototype: `void _print_rev_recursion(char *s);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion`
