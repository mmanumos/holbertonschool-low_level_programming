#include "holberton.h"

/**
 * print_times_table - times table
 * @n: num
 * Return: Always 0
 */

void print_times_table(int n)
{
	int num1;
	int num2;
	int resul;

	if (n < 15 && n > 0)
	{

		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				resul = num1 * num2;
				if (resul < 10)
				{
					add_space(resul, num2);
					_putchar(resul + '0');
				}
				else if (resul < 100)
				{
					add_space(resul, num2);
					_putchar((resul / 10) + '0');
					_putchar((resul % 10) + '0');

				}
				else
				{
					add_space(resul, num2);
					_putchar((resul / 100) + '0');
					_putchar(((resul / 10) % 10) + '0');
					_putchar((resul % 10) + '0');
				}
				add_comma(n, num2);

			}
			_putchar('\n');
		}
	}
}

/**
 * add_comma - add_comma
 * @n: num
 * @num2: num
 *
 */
void add_comma(int n, int num2)
{
	if (num2 <= (n - 1))
	{
		_putchar(',');
	}
}


/**
 * add_space - add space
 * @resul: resul
 * @num2: num2
 */
void add_space(int resul, int num2)
{
	if ((resul < 10) && (num2 > 0))
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if ((resul < 100) && (num2 > 0))
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		if (num2 > 0)
		{
			_putchar(' ');
		}
	}
}
