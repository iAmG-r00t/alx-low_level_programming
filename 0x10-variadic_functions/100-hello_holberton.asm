;"Hello, Holberton" in assembly language followed by a new line
;
;I am only allowed to use the system call write (use int or syscall, not a call)
;
;
;To build an executable
;      nasm -f elf64 100-hello_holberton.asm
;      gcc -no-pie -std=gnu89 100-hello_holberton.o -o hello
;
section .text					;section declaration

						;we must export the entry point to the ELF linker or
   global main					;loader. The conventional entry point is "_start".
						;Use "ld -e foo" to override the default.

section .data					;section declaration

msg  db   "Hello, Holberton",0xa		;string we want to print
len  equ  $ - msg				;length of string

section .text					;section declaration

main:						;entry point

						;write string to stdout

	mov	edx,len				;len == string length
	mov	ecx,msg				;msg == pointer to string to write
	mov	ebx,1				;1 == file descriptor (stdout)
	mov	eax,4				;4 == system call number (sys_write)
	int	0x80				;call kernel

						;exit via the kernel

	mov	ebx,0				;0 == system call argument (exit_code)
	mov	eax,1				;1 == system call number (sys_exit)
	int	0x80				;call kernel
