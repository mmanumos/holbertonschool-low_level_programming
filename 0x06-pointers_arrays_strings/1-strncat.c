#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - appends string to other string
 * @dest: pointed array
 * @src: String to copy
 * @n: chars number
 * Return: Return string to pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int cont;
	int cont2;
	int cont3;

	for (cont = 0; dest[cont] != '\0'; cont++)
		;

	for (cont2 = 0; src[cont2] != '\0'; cont2++)
		;
	if (n > cont2)
		n = cont2;

	for (cont3 = 0; cont3 < n; cont3++)
	{
		dest[cont] = src[cont3];
		cont++;
	}
	return (dest);
}
