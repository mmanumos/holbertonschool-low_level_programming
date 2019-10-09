#include "holberton.h"

/**
 * _puts_recursion - prints string using recursion
 *
 * @s : String to print
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
