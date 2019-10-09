#include "holberton.h"

/**
 * _print_rev_recursion - rev string using recursion
 *
 * @s : String to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
