#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - it allows multiply
 * two numbers
 *
 * @argc: counter or size of array pasts arguments
 * @argv: array of pasts arguments
 *
 * Return: 0-succesfull 1-error
 *
 */

int main(int argc, char *argv[])
{
	int ret;


	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		ret = 0;
	}
	else
	{
		printf("Error\n");
		ret = 1;
	}

	return (ret);
}
