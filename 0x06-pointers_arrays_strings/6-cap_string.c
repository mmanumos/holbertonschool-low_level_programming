#include "holberton.h"

/**
 * cap_string - upper first letter
 * @cad: string
 *
 * Return: Return string to pointer
 */

char *cap_string(char *cad)
{
	int cont;

	for (cont = 0; cad[cont] != '\0'; cont++)
	{
		if (val_char(cad[cont]) == 1)
		{
			if (cad[cont + 1] >= 97 && cad[cont + 1] <= 122)
			{
				cad[cont + 1] = cad[cont + 1] - ' ';
			}
		}
	}
	return (cad);
}


/**
 * val_char - validate char
 * @sym: char
 *
 * Return: Return 1 or 0
 */

int val_char(char sym)
{
	if ((sym == '.') || (sym == '\t') || (sym == '!') ||
	     (sym == ',') || (sym == '?')  || (sym == '(') ||
	     (sym == ';') || (sym == '"')  || (sym == ')') ||
	     (sym == '\n') || (sym == '{') || (sym == '}')
	   )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
