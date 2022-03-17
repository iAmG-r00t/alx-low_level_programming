# 0x05. C - Pointers, arrays and strings.

<p align="center">
  <img src="https://i.postimg.cc/dtJkkJV9/pointers.jpg">
</p>

## Resources

- [Pointers, arrays and Data Structures](https://gr00t.notion.site/Gr00t-s-C-Notes-94d170461cb7410fa110c998bd10ec03)
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout of C program](https://aticleworld.com/memory-layout-of-c-program/)
- [C Books and PDF's](../references) to check out and use as reference.

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---

<details>
<summary><a href="./0-reset_to_98.c">0. 98 Battery st.</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/MTRnHM0y/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-reset_to_98.c -o 0-98`

</details>

<details>
<summary><a href="./1-swap.c">1. Don't swap horses in crossing a stream</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/tggtCWJG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-swap.c -o 1-swap`

</details>

<details>
<summary><a href="./2-strlen.c">2. This report, by its very length, defends itself against the rist of being read</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/Rh2YDDrS/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-strlen.c -o 2-strlen`

</details>

<details>
<summary><a href="./3-puts.c">3. I do not fear computers. I fear the lack of them</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/m2m5Fkp3/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-puts.c -o 3-puts`

</details>

<details>
<summary><a href="./4-print_rev.c">4. I do not fear computers. I fear the lack of them</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/t4m3bGyJ/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-print_rev.c -o 4-print_rev`

</details>

5. [A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](./5-rev_string.c) : A C function that reverses a string.
	- Prototype: `void rev_string(char *s);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string`
6. [Half the lies they tell about me aren't true](./6-puts2.c) : A C function program that prints every other character of a string, starting with the first character, followed by a new line.
	- Prototype: `void puts2(char *str);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2`
7. [Winning is only half of it. Having fun is the other half](./7-puts_half.c) : A C function that prints half of a string, followed by a new line.
	- Prototype: `void puts_half(char *str);`
	- The function should print the second half of the string.
	- If the number of characters is odd, the function should print the last `n` characters of the string where `n = (length_of_the_string - 1) / 2)`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half`
8. [Arrays are not pointer](./8-print_array.c) : A C function program that prints `n` elements of an array of integers, followed by a new line.
	- Prototype: `void print_array(int *a, int n);`
	- Where `n` is the number of elements of the array to be printed.
	- Numbers must be separated by comma, followed by a space.
	- The numbers should be displayed in the same order as they are stored in the array.
	- You are allowed to use `printf`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array`
9. [strcpy](./9-strcpy.c) : A C function program that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
	- Prototype: `char *_strcpy(char *dest, char *src);`
	- Return value is the pointer to `dest`.
	- **FYI:** The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.
	- [Read more here about strcpy](https://www.holbertonschool.com/coding-resource-strcpy-in-c).
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy`
10. [Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](./100-atoi.c) : A C function program that converts a string into an integer.
	- Prototype: `int _atoi(char *s);`
	- The number in the string can be preceded by an infinite number of characters.
	- You need to take into account all the `-` and `+` signs before the number.
	- If there are no numbers in the string, the function must return `0`.
	- You are not allowed to use `long`
	- You are not allowed to declare new variables of “type” array.
	- You are not allowed to hard-code special values.
	- We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.
	- **FYI:** The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi`
11. [Don't hate the hacker, hate the code](./101-keygen.c) : A C function program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c)
	- You are allowed to use the standard library.
	- You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
	- man `srand`, `rand`, `time`.
	- `gdb` and `objdump` can help.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen`
