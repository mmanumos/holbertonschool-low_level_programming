#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - Verify the argument
 * after sends it to get_coins
 *
 * @argc: counter or size of array pasts arguments
 * @argv: array of pasts arguments
 *
 * Return: 0-succesfull 1-error
 *
 */

int main(int argc, char *argv[])
{

	if (argc == 2 && atoi(argv[1]) >= 0)
	{
		int co1, co2;

		for (co1 = 1; co1 < argc; co1++)
		{
			for (co2 = 0; argv[co1][co2] != '\0'; co2++)
			{
				if (!(isdigit(argv[co1][co2])))
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		get_coins(atoi(argv[1]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}


/**
 * get_coins - prints the number of coins
 * two or more numbers
 *
 * @cents: Passed value for program
 *
 * Return: Always 0
 *
 */

int get_coins(int cents)
{

	int coins = 0;

	for ( ; cents >= 25; coins++, cents -= 25)
		;
	for ( ; cents >= 10; coins++, cents -= 10)
		;
	for ( ; cents >= 5; coins++, cents -= 5)
		;
	for ( ; cents >= 2; coins++, cents -= 2)
		;
	for ( ; cents >= 1; coins++, cents--)
		;

	printf("%d\n", coins);

	return (0);
}
