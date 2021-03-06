#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - appends string to other string
 * @dest: pointed array
 * @src: String to copy
 * @n: chars number
 * Return: Return string to pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0; cont < n && src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}

	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
