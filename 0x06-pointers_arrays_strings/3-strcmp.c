#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - appends string to other string
 * @dest: pointed array
 * @src: String to copy
 * @n: chars number
 * Return: Return string to pointer
 */

int _strcmp(char *s1, char *s2)
{
	int cont;

	for (cont = 0; s1[cont] == s2[cont] && (s1[cont] != '\0'); cont++)
		;
	return (s1[cont] - s2[cont]);
}
