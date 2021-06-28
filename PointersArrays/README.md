# Pointers and Arrays

- Concept area to understand what is a pointer and how they work with arrays.
- Read this [post ](https://www.notion.so/C-Programming-f13cdb9661db464f8ea326c5a2654e8e) to understand more on pointers and variables with examples.
	- Below are C example programs from the above post.

## Programs

- Address of variables `c` and `n`. [Address](address.c)
	- Compile this way: `gcc address.c -o address`
- Pointer size and address. [psize](./psize.c)
	- Compile this way: `gcc psize.c -o psize`
- Storing an address of a variable into a pointer. [pn](./pn.c)
	- Compile this way: `gcc pn.c -o pn`
- Dereferencing (Hard term right here.)
	- [Part 1](dereference_1.c)
		- Compile this way: `gcc dereference_1.c -o dereference_1`
	- [Part 2](./dereference_2.c)
		- Compile this way: `gcc dereference_2.c -o dereference_2`
- Function parameters are passed by value. [modif_my_param](./modif_my_param.c)
	- Compile this way: `gcc modif_main.c modif_my_param.c -o modif_param`
