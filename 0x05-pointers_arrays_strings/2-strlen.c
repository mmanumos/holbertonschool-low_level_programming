#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - return cont
 * @s: string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	return (cont);
}
