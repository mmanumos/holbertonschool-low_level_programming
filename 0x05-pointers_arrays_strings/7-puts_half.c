#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print char
 * @str: string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int ts;
	int limit;

	for (ts = 0; str[ts] != 0; ts++)
		;
	printf("%d \n", ts);
	if (ts % 2 == 0)
	{
		limit = (ts / 2);
	}
	else
	{
		limit = (ts + 1) / 2;
	}

	while (limit < ts)
	{
		_putchar(str[limit]);
		limit++;
	}

	_putchar('\n');

}
