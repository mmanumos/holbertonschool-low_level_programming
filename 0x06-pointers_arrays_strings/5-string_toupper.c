#include "holberton.h"

/**
 * string_toupper - upper character
 * @cad: string
 *
 * Return: Return string to pointer
 */

char *string_toupper(char *cad)
{
	int cont;

	for (cont = 0; cad[cont] != '\0'; cont++)
	{
		if (cad[cont] >= 97 && cad[cont] <= 122)
			cad[cont] = cad[cont] - ' ';
	}
	return (cad);
}
