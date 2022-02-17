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
- Second compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main/0-main.c -o 0-main`

</details>

<details>
<summary><a href="./1-main.c">1. Like, comment, subscribe</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/Xq4qNHnn/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -std=gnu89 1-main.c -o 1-main`

</details>

2. [0 > 972](./2-main.c) : A C program that prints the largest of three integers.
	- For this task we are given the main C program file that utilizes a function prototype called [2-largest_number](./2-largest_number_original.c), where when the code compiled and executed it shows `0` to be the largest number from our main program file which shouldn't be the case.
	- We are tasked to fix the prototype function code. This is the [2-largest_number](./2-largest_number.c) prototype function code that works correctly.
	- Compile the code this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main`
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
