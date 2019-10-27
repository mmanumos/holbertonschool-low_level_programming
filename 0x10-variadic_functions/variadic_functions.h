#ifndef VARIADIC_FUCTIONS_H
#define VARIADIC_FUCTIONS_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @symbol: Flag to get operation
 * @f: The function associated (address)
 */

typedef struct op
{
	char *symbol;
	void (*f)(va_list par);
} op;



int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
