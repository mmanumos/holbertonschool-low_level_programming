#include "holberton.h"

/**
 * leet - replace string for number
 * @s: string
 *
 * Return: Return string to pointer
 */

char *leet(char *s)
{
	char low[5] = "aeotl";
	char upp[5] = "AEOTL";
	char rem[5] = "43071";
	int cont, cont2;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		for (cont2 = 0; low[cont2] != '\0'; cont2++)
		{
			if (s[cont] == low[cont2] || s[cont] == upp[cont2])
			{
				s[cont] = rem[cont2];
			}
		}
	}
	return (s);
}
