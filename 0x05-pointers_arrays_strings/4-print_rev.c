#include "holberton.h"

/**
 * print_rev - print string
 * @s: string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int ts;

	for (ts = 0; s[ts] != '\0'; ts++)
		;

	ts -= 1;
	while (ts >= 0)
	{
		_putchar(s[ts]);
		ts--;
	}
	_putchar('\n');
}
