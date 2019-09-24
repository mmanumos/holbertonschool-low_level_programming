#include "holberton.h"

/**
 * print_last_digit - last digit
 * @n: variable
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{

	n = (n % 10);
	_putchar(n + '0');
	return (n);

}
