#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints according to condition
 *
 * Return: Always 0
 */
int main(void)
{
	long int number = 0;
	long int number1 = 0;
	long int number2 = 1;
	long int cont = 0;

	while (cont <= 50)
	{
		number = number1 + number2;
		printf("%ld ,",number);
		number1 = number2;
		number2 = number;
		cont++;
	}
	putchar('\n');
	return (0);
}
