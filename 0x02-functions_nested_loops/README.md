# 0x02. C - Functions, nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
- [C - Books and PDF's](../references) to check out and use as reference.

## Tasks

- **Note** for all these challenges we will not be using global variables and any standard library.
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).
- We are allowed to use the prototype funtion [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
- All `*-main.c` files will be located in the [main](./main) directory

---

<details>
<summary><a href="./0-putchar.c">0. _putchar</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/N0SpVLPs/image.png' border='0' alt='image'/></a>

- Below is the assembly code of the program with comments.

```asm
<main>: endbr64
<main+4>: push rbp                                  ; \ standard function
<main+5>: mov rbp,rsp                               ; / prologue code
<main+8>: sub rsp,0x20                              ; allocate space for stack array
<main+12>: mov rax,QWORD PTR fs:0x28                ; stack-guard moved to rax
<main+21>: mov QWORD PTR [rbp-0x8],rax              ; stack-guard moved to rbp-0x8
<main+25>: xor eax,eax                              ; zeroing out eax
<main+27>: movabs rax,0x726168637475705f            ; string '_putchar' moved to rax
<main+37>: mov QWORD PTR [rbp-0x11],rax             ; string moved to rbp-0x11
<main+41>: mov BYTE PTR [rbp-0x9],0x0               ; rbp-0x9 = 0
<main+45>: mov DWORD PTR [rbp-0x18],0x0             ; rbp-0x18 (ch) = 0
<main+52>: jmp 0x5555555551e0 <main+78>             ; jump
<main+54>: mov eax,DWORD PTR [rbp-0x18]             ; move rbp-0x18 (ch) to eax
<main+57>: cdqe                                     ; rax = eax (ch)
<main+59>: movzx eax,BYTE PTR [rbp+rax*1-0x11]      ; eax = rbp-0x11[ch]
<main+64>: movsx eax,al                             ; mov 8-bit str chr value to eax
<main+67>: mov edi,eax                              ; mov str chr to edi (arg1)
<main+69>: call 0x555555555169 <_putchar>           ; print character
<main+74>: add DWORD PTR [rbp-0x18],0x1             ; increament rbp-0x18 by 1
<main+78>: cmp DWORD PTR [rbp-0x18],0x8             ; is ch <= 8
<main+82>: jle 0x5555555551c8 <main+54>             ; jump
<main+84>: mov edi,0xa                              ; mov char '\n' to edi (arg1)
<main+89>: call 0x555555555169 <_putchar>           ; print new line char
<main+94>: mov eax,0x0                              ; eax = 0
<main+99>: mov rdx,QWORD PTR [rbp-0x8]              ; mv stack-guard to rdx
<main+103>: sub rdx,QWORD PTR fs:0x28               ; rdx should be 0
<main+112>: je 0x555555555209 <main+119>            ; leave function when equal
<main+114>: call 0x555555555070 <__stack_chk_fail@plt>
<main+119>: leave
<main+120>: ret
```
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar`

</details>

<details>
<summary><a href="./1-alphabet.c">1.I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/QN5wDt0t/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/1-main.c 1-alphabet.c -o 1-alphabet`

</details>

<details>
<summary><a href="./2-print_alphabet_x10.c">2.10 x alphabet</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/RVRLc6MN/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10`

</details>

<details>
<summary><a href="./3-islower.c">3.islower</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/mkbf5zKt/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-islower.c -o 3-islower`

</details>

<details>
<summary><a href="./4-isalpha.c">4.isalpha</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/bwvFCG9F/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-isalpha.c -o 4-isalpha`

</details>

<details>
<summary><a href="./5-sign.c">5.Sign</a></summary><br>

<a href='https://postimg.cc/SnQQHhYB' target='_blank'><img src='https://i.postimg.cc/MpVcMZ6p/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/5-main.c 5-sign.c -o 5-sign`

</details>

<details>
<summary><a href="./6-abs.c">6.There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/NMryvRNb/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-abs.c -o 6-abs`

</details>

7. [There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](./7-print_last_digit.c) : A C program function that will print the last digit of a number.
	- Prototype: `int print_last_digit(int);`
	- Returns the value of the last digit.
	- Use this [main.c](./main/7-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-print_last_digit.c -o 7-last_digit`
8. [I'm federal agent Jack Bauer, and today is the longest day of my life](./8-24_hours.c): A C program function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
	- Prototype: `void jack_bauer(void);`
	- You can listen to this [soundtrack](https://www.youtube.com/watch?v=btAfXqgMkPs) while coding :)
	- Use this [main.c](./main/8-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/8-main.c 8-24_hours.c -o 8-24`
9. [Learn your times table](./9-times_table.c) : A C program function that prints the 9 times table, starting with 0.
	- Prototype: `void time_table(void);`
	- Comiple and run the code this way: `./9-times_table | cat -e` to see the format.
	- Use this [main.c](./main/9-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/9-main.c 9-times_table.c -o 9-times_table`
10. [a+b](./10-add.c) : A C program function that adds two integers and returns the result.
	- Prototype: `int add(int, int);`
	- Use this [main.c](./main/10-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/10-main.c 10-add.c -o 10-add`
11. [Holberton School, 98 Battery Street, the OG](./11-print_to_98.c) : A C program function that prints all natural numbers from `n` to `98`, followed by a new line.
	- Prototype: `void print_to_98(int n);`
	- Numbers must be separated by a comma, followed by a space.
	- Numbers should be printed in order.
	- The first number should be the number passed to your function.
	- The last printed number should be `98`.
	- You are allowed to use the standard library.
	- Use this [main.c](./main/11-main.c) C program file to check if the code works correctly.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/11-main.c 11-print_to_98.c -o 11-98`
