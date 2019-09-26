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
	int res1;
	int res2;

	for (number = 0; number <= 10; number++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			res1 = (number2 / 10);
			res2 = (number2 % 10);
			if (res1 > 0)
			{
				_putchar(res1 + '0');
			}
			_putchar(res2 + '0');
		}
		_putchar('\n');
	}
}
