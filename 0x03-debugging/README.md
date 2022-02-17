# 0x03. C - Debugging

<p align="center">
  <img src="https://i.postimg.cc/NFQbkDfM/image.png"
</p>

## Resources

- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)
	- [Piaget's theory of cognitive development](https://en.wikipedia.org/wiki/Piaget's_theory_of_cognitive_development)

## Tasks

<details>
<summary><a href="./0-main.c">0. Multiple mains</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/FKc2PPmg/image.png' border='0' alt='image'/></a>
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/vmWN7cL0/image.png' border='0' alt='image'/></a>

- First compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main/main.c -o first`
- Second compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main`

</details>

<details>
<summary><a href="./1-main.c">1. Like, comment, subscribe</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/Xq4qNHnn/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -std=gnu89 1-main.c -o 1-main`

</details>

<details>
<summary><a href="./2-largest_number.c">2. 0 > 972?</a></summary><br>

- This program prints the largest of three integers.

```bash
carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$ 
```

```bash
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$
```
```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
```
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/c46hdXCR/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c main/2-main.c -o 2-main`

</details>

3. [Leap year](./3-main_a.c) : A C program that converts a date to the day of the year and determines how many days are left in the year, taking leap year into consideration.
	- In this task we are tasked to fix a prototype function `print_remaining_days()` that calculates the remaining days of the year.
	- You can assume that all test cases have valid months (i.e. the value of `month` will never be less than `1` or greater than `12`) and valid days (i.e. the value of `day` will never be less than `1` or greater than `31`).
	- You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
	- The original [print_remaining_days](./3-print_remaining_days_original.c) prototype function is here, while the fixed code is [here](./3-print_remaining_days.c).
	- I have also placed all the files, [convert_day](./3-convert_day.c) prototype function, first main file that provides the correct code output with the original print remaining days function prototype as `247 days remaining`.
	- Compile the code this way with the main_a C file first: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days_original.c 3-main_a.c -o 3-main_a`
	- Then compile the code with the second main_b file with the original prototype function: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days_original.c 3-main_b.c -o 3-main_b`
		- You will get an error, so try and understand that error before you proceed to see my solution.
	- Then comipile the code with the fixed code: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b`
