#include "holberton.h"

/**
 * print_diagonal - print diagona
 * @n: count
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int number;
	int number2;

	if (n > 0)
	{
		for (number = 0; number < n; number++)
		{
			for (number2 = 0; number2 < number; number2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
