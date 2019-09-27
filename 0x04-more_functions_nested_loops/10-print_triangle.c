
#include "holberton.h"
/**
 * print_triangle - print diagona
 * @size: count
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int number;
	int number2;

	if (size > 0)
	{
		for (number = 1; number <= size; number++)
		{
			for (number2 = 1; number2 <= size; number2++)
			{
				if (number2 <= (size - number))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
