#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - appends string to other string
 * @s1: string 1
 * @s2: String 2
 *
 * Return: Return string to pointer
 */

int _strcmp(char *s1, char *s2)
{
	int cont;

	for (cont = 0; s1[cont] == s2[cont] && (s1[cont] != '\0'); cont++)
		;
	return (s1[cont] - s2[cont]);
}
