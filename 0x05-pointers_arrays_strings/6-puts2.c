#include "holberton.h"

/**
 * puts2 - print char
 * @str: string
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int ts;

	for (ts = 0; str[ts] != 0; ts++)
	{
		if (str[ts] % 2 == 0)
		{
			_putchar(str[ts]);
		}
	}
	_putchar('\n');

}
