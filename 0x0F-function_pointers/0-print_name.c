#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print string
 * using the given pointer to function
 *
 * @name: String to print
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if ((f != NULL) && (name != NULL))
		f(name);
}
