#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the quantity of the arguments
 * without the name
 *
 * @argc: count pasts arguments
 * @argv: array of pasts arguments
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
