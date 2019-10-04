#include "holberton.h"

/**
 * rot13 - replace string for number
 * @s: string
 *
 * Return: Return string to pointer
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rem[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int cont, cont2;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		for (cont2 = 0; alpha[cont2] != '\0'; cont2++)
		{
			if (s[cont] == alpha[cont2])
			{
				s[cont] = rem[cont2];
				break;
			}
		}
	}
	return (s);
}
