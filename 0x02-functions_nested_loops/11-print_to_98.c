#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - last digit
 * @n: variable
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d \n", 98);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d \n", 98);
	}
	else{
		printf("%d \n", 98);
	}

}
