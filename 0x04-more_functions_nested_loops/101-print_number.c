#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - print diagona
 * @size: count
 *
 * Return: Always 0
 */
void print_number(int n)
{
        int div = 10;
	int dig;
	if (n > 10)
	{
		while (n/div > 0){
			div = div * 10;
		}
		div = div / 10;
		while (div > 0)
		{
			dig = n / div;
			dig = dig % 10;
			printf ("%d", dig);
			div = div / 10;
			printf("\n");
		}
	}
	else
	{
		printf("%d\n", n);
	}

}
