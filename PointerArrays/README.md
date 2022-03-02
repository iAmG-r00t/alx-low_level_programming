# Pointers and Arrays

<p align="center">
  <img src="https://i.postimg.cc/RF1dMWZT/pointers.jpg">
</p>

- Concept area to understand what is a pointer and how they work with arrays.
- Read this [post ](https://gr00t.notion.site/Gr00t-s-C-Notes-94d170461cb7410fa110c998bd10ec03) to understand more on pointers and variables with examples.
	- Below are C example programs from the above post.

## Programs

<details>
<summary><a href="./sizeof.c">Types and Memory</a></summary>

- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 sizeof.c -o sizeof`

</details>

<details>
<summary><a href="./address.c">Address of Variables</a></summary>

- Program shows you address of variables  `c` and `n`.
- Compile the code this way: `gcc address.c -o address`

</details>

<details>
<summary><a href="./psize.c">Pointer size and address</a></summary>

- Compile the code this way: `gcc -Wall -Werror -pedantic -Wextra -std=gnu89 psize.c -o psize`

</details>

<details>
<summary><a href="./pn.c">Storing an address of a variable into a pointer</a></summary>

- Compile the code this way: `gcc pn.c -o pn`

</details>

<details>
<summary>Dereferencing (Hard term right here.)</summary>

- [Part 1](./dereference_1.c)
  - Compile the code this way: `gcc dereference_1.c -o dereference_1`

- [Part 2](./dereference_2.c)
  - Compile the code this way: `gcc dereference_2.c -o dereference_2`

</details>

<details>
<summary>Functions parameters are passed by value</summary>

- [modif\_my\_param](./modif_my_param.c)
  - Compile the code this way: `gcc modif_main.c modif_my_param.c -o modif_param`

- [Assignment](./modif_my_char_var.c)
	- [Memory Address view](https://drive.google.com/file/d/1sBmff99ACmkyHyB71wZAZ2Jh4nz3HjT_/view?usp=sharing)
  - Compile the code this way: `gcc modif_char_main.c modif_my_char_var.c -o modif_char`

</details>

<details>
<summary><a href="./array.c">Arrays</a></summary>

  - Compile the code this way: `gcc array.c -o array`

</details>

<details>
<summary>Arrays vs Pointer</summary>

  - [Array vs Pointer](array_vs_pointer.c)
    - Compile the code this way: `gcc array_vs_pointer.c -o array_vs_pointer`
  - [Array type Decay](./array_type_decay.c)
    - Compile the code this way: `gcc -o array_type_decay array_type_decay.c`
  - [sizeof Usage in Array & Pointer](./sizeof_array.c)
    - Compile the code this way: `gcc -Wall -Werror -Wextra -pedantic -o sizeofarray sizeof_array.c`
  - [Unary & Usage Array](./address_of_array.c)
    - Compile the code this way: `gcc -o addressofarray address_of_array.c`
  - [Size of array and address](./sizeof_array_address.c)
    - Compile the code this way: `gcc -o sizeof_array_address sizeof_array_address.c`

</details>

<details>
<summary>Pointers Arithmetic</summary>

  - [Illustrates pointers arithmetic](array_pointers_arithmetic.c)
    - Compile the code this way: `gcc array.c -o array_pointers_arithmetic array_pointers_arithmetic.c`
  - [pointers arithmetic](./pointers_arithmetic.c)
    - Compile the code this way: `gcc pointers_arithmetic.c -o pointers_arithmetic`
  - [Assignment](./solveme.c)
    - Compile the code this way: `gcc solveme.c -o solveme`
    - So before I proceeded to adding printf statements and filling up the memory layout excel file, I compiled the code and threw it in gdb, so below is the assembly code of the program without any printf function calls. (**This is the best way to understand your code**)

    <details>
    <summary>Assembly Code</summary>

    ```asm
    <main>:       endbr64                                         ;\ standard function
    <main+4>:     push   rbp                                      ;
    <main+5>:     mov    rbp,rsp                                  ;/ prologue code
    <main+8>:     sub    rsp,0x30                                 ; allocates 48 byes on the stack
    <main+12>:    mov    rax,QWORD PTR fs:0x28                    ; moves the stack guard to $rax
    <main+21>:    mov    QWORD PTR [rbp-0x8],rax                  ; moves the stack guard from rax to the stack [rbp-0x8]
    <main+25>:    xor    eax,eax                                  ; clears out eax $rax
    <main+27>:    mov    DWORD PTR [rbp-0x20],0x62                ; moves integer 98 to the stack at location [rbp-0x20]
    <main+34>:    mov    DWORD PTR [rbp-0x1c],0xc6                ; moves integer 198 to the stak at location [rbp-0x1c]
    <main+41>:    mov    DWORD PTR [rbp-0x18],0x12a               ; moves integer 298 to the stack at location [rbp-0x18]
    <main+48>:    mov    DWORD PTR [rbp-0x14],0x18e               ; moves integer 398 to the stack at location rbp-0x14]
    <main+55>:    mov    DWORD PTR [rbp-0x10],0x1f2               ; moves integer 498 to the stack at location [rbp-0x10]
    <main+62>:    lea    rax,[rbp-0x20]                           ; load the address of integer 98 location and store it to $rax
    <main+66>:    add    rax,0x4                                  ; pointer arithmetic *(a + 1) adds 4bytes to address in $rax
    <main+70>:    mov    QWORD PTR [rbp-0x30],rax                 ; moves the result from $rax to [rbp-0x30] and stored as a 64bit address
    <main+74>:    mov    rax,QWORD PTR [rbp-0x30]                 ; moves the address that contains integer 198 from [rbp-0x30] to $rax
    <main+78>:    mov    DWORD PTR [rax],0x62                     ; (dereferencing) moves integer 98 to the address in $rax
    <main+84>:    lea    rax,[rbp-0x20]                           ; load the address with the new integer value 98 to $rax
    <main+88>:    add    rax,0xc                                  ; pointer arithmetic *(a + 3) adds 12 bytes to address in $rax
    <main+92>:    mov    QWORD PTR [rbp-0x28],rax                 ; moves the result from $rax to [rbp-0x28] and stores as a 64bit address
    <main+96>:    mov    rax,QWORD PTR [rbp-0x30]                 ; moves the 64bit address in [rbp-0x30] that contains integer 98 to $rax
    <main+100>:   mov    eax,DWORD PTR [rax]                      ; moves value 98 to eax
    <main+102>:   lea    edx,[rax+0x539]                          ; (dereferencing) move value in $rax + 1337 == [rax+0x539] to $edx == 1435
    <main+108>:   mov    rax,QWORD PTR [rbp-0x28]                 ; moves address in [rbp-0x28] to $rax
    <main+112>:   mov    DWORD PTR [rax],edx                      ; moves value 1435 in $edx to address from [rbp-0x28] that's in $rax
    <main+114>:   mov    eax,0x0                                  ; clears $eax
    <main+119>:   mov    rdx,QWORD PTR [rbp-0x8]                  ; moves stack guard to $rdx from the stack
    <main+123>:   sub    rdx,QWORD PTR fs:0x28                    ; checks if stack guard is the same
    <main+132>:   je     0x5555555551d4 <main+139>                ; if its the same then we can leave the program
    <main+134>:   call   0x555555555050 <__stack_chk_fail@plt>    ; if not a function call is made to stack_chk_fail
    <main+139>:   leave                                           ; leaves the program
    <main+140>:   ret                                             ; return value
    ```

    </details>

	- [Memory Address view](https://docs.google.com/spreadsheets/d/1eiHCsZ53yNuuowBCUnaHSBVxrCZQ3Gqw/edit?usp=sharing&ouid=115294069128015498378&rtpof=true&sd=true)
  - Compile the code this way: `gcc -o solveme solveme.c`

</details>

<details>
<summary>Strings</summary>

  - [string array using pointer arithmetic](./string_array.c)
    - Compile the code this way: `gcc string_array.c -o string_array`
  - [string array the proper way](./array_string.c)
    - Compile the code this way: `gcc array_string.c -o array_string`

</details>
