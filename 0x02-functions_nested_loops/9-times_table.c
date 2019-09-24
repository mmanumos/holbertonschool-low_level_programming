#include "holberton.h"

/**
 * jack_bauer - 24 hrs
 *
 * Return: Always 0
 */

void times_table(void)
{
	int num1;
	int num2;
	int resul;
	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9;num2++) {
			resul = num1 * num2;
			_putchar(resul + '0');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
