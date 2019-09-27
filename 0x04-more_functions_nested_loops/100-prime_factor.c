#include "holberton.h"
#include <stdio.h>
/**
 * main - print greater prime number
 *
 * Return: Always 0
 */
int main(void)
{
	long int limit = 612852475143;
	long int cont = 2;

	while (cont <= limit)
	{
		if (limit % cont == 0)
		{
			limit = limit / cont;
		}
		else
		{
			cont++;
		}
	}
	printf("%lu\n", cont);
	return (0);

}
