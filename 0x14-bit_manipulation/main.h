#ifndef _MAIN_H
#define _MAIN_H

#include <stddef.h>
#include <stdio.h>

#ifdef DEBUG /*prints debug statements*/
#endif

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
