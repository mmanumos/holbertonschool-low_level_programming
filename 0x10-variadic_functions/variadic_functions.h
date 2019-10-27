#ifndef VARIADIC_FUCTIONS_H
#define VARIADIC_FUCTIONS_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



/**
 * struct op - Struct op
 *
 * @symbol: Flag to get operation
 * @f: The function associated (address)
 */

typedef struct op
{
	char *symbol;
	void (*f)();
} op;

void print_char(va_list par);
void print_int(va_list par);
void print_f(va_list par);
void print_s(va_list par);

#endif
