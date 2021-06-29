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
- Function parameters are passed by value.
	- [modif_my_param](./modif_my_param.c)
		- Compile this way: `gcc modif_main.c modif_my_param.c -o modif_param`
	- [Assignment](./modif_my_char_var.c)
		- [Memory Address view](https://memoryview.tiiny.site/)
		- Compile this way: `gcc modif_char_main.c modif_my_char_var.c -o modif_char`
- Arrays. [Example code for an array](./array.c)
- [Arrays vs Pointer](./array_vs_pointer.c) : An Array is not a pointer but you can still use the name of the array in your code, and it's value will be ...the address of the first element of the array.
- [Array type decay](./array_type_decay_main.c) : This is when the name of an array is used in an expression, the array type gets automatically implicitly converted to pointer-to-element type in all contexts and the resultant pointer is a completely independent temporary value, that is the address of the first element of the array.
- [sizeof_array](./sizeof_array.c) : First exception.
- [address-of array](./address_of_array.c) : `&` Second exception.
