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
2. [Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](./2-strlen_recursion.c)
	- Prototype: `int _strlen_recursion(char *s);`
	- **FYI:** The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89  main/2-main.c 2-strlen_recursion.c -o 2-strlen_recursion`
3. [You mustn't be afraid to dream a little bigger, darling](./3-factorial.c) : A function that returns the factorial of a given number.
	- Prototype: `int factorial(int n);`
	- If `n` is lower than `0`, the function should return `-1` to indicate error.
	- Factorial of `0` is `1`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-factorial.c -o 3-factorial`
4. [Once an idea has taken hold of the brain it's almost impossible to eradicate](./4-pow_recursion.c) : A function that returns the value of `x` raised to the power of `y`.
	- Prototype: `int _pow_recursion(int x, int y);`
	- If `y` is lower than `0`, the function should return `-1`
	- **FYI:** The standard library provides a different function: `pow`. Run `man pow` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/4-main.c 4-pow_recursion.c -o 4-pow`
5. [Your subconscious is looking for the dreamer](./5-sqrt_recursion.c) : A function that returns the natural square root of a number.
	- Prototype: `int _sqrt_recursion(int n);`
	- If `n` does not have a natural square root, the function should return `-1`
	- **FYI:** The standard library provides a different function: `sqrt`. Run `man sqrt` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/5-main.c 5-sqrt_recursion.c -o 5-sqrt`
