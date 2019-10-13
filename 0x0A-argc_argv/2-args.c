#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments
 * pasts to the program
 *
 * @argc: count pasts arguments
 * @argv: array of pasts arguments
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
