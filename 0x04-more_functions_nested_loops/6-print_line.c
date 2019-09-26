#include "holberton.h"

/**
 * print_line - print line
 * @n: count
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int number;

	for (number = 0; number < n; number++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
