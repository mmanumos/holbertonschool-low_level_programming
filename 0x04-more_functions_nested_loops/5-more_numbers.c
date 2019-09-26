#include "holberton.h"

/**
 * more_numbers - Numbers from 1 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int number;
	int number2;

	for (number = 0; number <= 10; number++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			if (number2 > 9)
			{
				_putchar((number2 / 10) + '0');
				_putchar((number2 % 10) + '0');
			}
			else
			{
				_putchar(number2 + '0');
			}
		}
		add_line();
	}
	add_line();
}

/**
 * add_line - add line blank
 *
 * Return: Always 0
 */

void add_line(void)
{
	_putchar('\n');

}
