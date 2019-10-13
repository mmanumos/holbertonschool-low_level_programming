#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
	int add = 0, count = 1;

	while (count < argc)
	{
		if (atoi(argv[count]))
		{
			add = add + atoi(argv[count]);
			count++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", add);

	return (0);
}
