#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - it allows add
 * two or more numbers
 *
 * @argc: counter or size of array pasts arguments
 * @argv: array of pasts arguments
 *
 * Return: 0-succesfull 1-error
 *
 */

int main(int argc, char *argv[])
{
	int add = 0, co = 1;

	while (co < argc)
	{
		int co1 = 0;
		add = add + atoi(argv[co]);

		while (argv[co][co1] != '\0')
		{
			if (!(isdigit(argv[co][co1])) || atoi(argv[co]) < 1)
			{
				printf("Error\n");
				return (1);
			}
			co1++;
		}
		co++;
	}

	printf("%d\n", add);

	return (0);
}
