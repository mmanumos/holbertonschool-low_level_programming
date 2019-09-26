#include "holberton.h"

/**
 * print_square - print square
 * @size: count
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int number;
	int number2;

	if (size > 0)
	{
		for (number = 0; number < size; number++)
		{
			for(number2 = 0; number2 < size; number2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
