#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - call the functions
 * to operate with given arguments
 * and print the result
 *
 * @argc: Contains the elements
 * @argv: size of array
 *
 *
 * Return: -1-fail -1-no_macth -1-size<0 c1-match_index
 */

int main(int argc, char *argv[])
{

	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);

	if (operation != NULL)
	{
		printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

}
