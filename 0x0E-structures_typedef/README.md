# 0x0E. C - Structures, typedef

## Resource

- [0x0d. Structures](../references/Structures.pdf)
- [struct (C programming Language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [struct memory layout in C](https://stackoverflow.com/questions/2748995/struct-memory-layout-in-c)
- [Betty Documentation Style: Data Structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0d typedef](../references/typedef.pdf)
- [Programming in C by Stephen Kochan Chapter 8, working with Structures pg 163-189](../references/Programming_in_C_4th_Edition_by_Stephen_Kochan.pdf) \- stephen g. kochan\(1\).pdf)
- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) ***Advanced, not mandatory***

## Tasks

0. [Poppy](./dog.h) : A new type `struct dog` with the following elements.
<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU65GPZGY3%2F20210719%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210719T154655Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9e19d032cd4684e0afbd6c22e84e978170d5424732da770dbdd9adb881dc6b0e" alt="dog_0" width="200"/>
	- `name`, type = `char *`
	- `age`, type = `float`
	- `owner`, type = `char *`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`
