# 0x0E. C - Structures, typedef

## Resource

- [0x0d. Structures](../references/Structures.pdf)
- [struct (C programming Language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [struct memory layout in C](https://stackoverflow.com/questions/2748995/struct-memory-layout-in-c)
- [Betty Documentation Style: Data Structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0d typedef](../references/typedef.pdf)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- [Programming in C by Stephen Kochan Chapter 8, working with Structures pg 163-189](../references/Programming_in_C_4th_Edition_by_Stephen_Kochan.pdf) \- stephen g. kochan\(1\).pdf)
- [More on structs](../references/structs.pdf)
- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) ***Advanced, not mandatory***

## Tasks

<img align="right" src="../.imgs/dog0.jpg" alt="dog0" width="120" height="120">

0. [Poppy](./dog.h) : A new type `struct dog` with the following elements.
	- `name`, type = `char *`
	- `age`, type = `float`
	- `owner`, type = `char *`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`

<img align="right" src="../.imgs/dog1.jpg" alt="dog1" width="120" height="120">

1. [A dog is the only thing on earth that loves you more than you love yourself](./1-init_dog.c) : A function that initialize a variable of type `struct dog`
	- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b`

<img align="right" src="../.imgs/dog2.jpg" alt="dog2" width="120" height="120">

2. [A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](./2-print_dog.c) : A function that prints a `struct dog`
	- Prototype: `void print_dog(struct dog *d);`
	- Format: see example below.
	- You are allowed to use the standard library.
	- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
	- If `d` is `NULL` print nothing.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c`

<img align="right" src="../.imgs/dog3.jpg" alt="dog3" width="120" height="120">

3. [Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read](./dog.h) : Define a new type `dog_t` as a new name for the type `struct dog`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d`

<img align="right" src="../.imgs/dog4.jpg" alt="dog4" width="120" height="120">

4. [A door is what a dog is perpetually on the wrong side of](./4-new_dog.c) : A function that creates a new dog.
	- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
	- You have to store a copy of `name` and `owner`
	- Return `NULL` if the function fails.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e`

<img align="right" src="../.imgs/dog5.jpg" alt="dog5" width="120" height="120">

5. [How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](./5-free_dog.c) : A function that frees dogs.
	- Prototype: `void free_dog(dog_t *d);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f`
	- Run the code this way: `valgrind ./f`
