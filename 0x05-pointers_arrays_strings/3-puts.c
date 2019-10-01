#include "holberton.h"
#include <stdio.h>
/**
 * _puts - print string
 * @str: string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int cont;

	for (cont = 0; str[cont] != '\0'; cont++)
	{
		_putchar(str[cont]);
	}
	_putchar('\n');
}
