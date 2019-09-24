#include "holberton.h"

/**
 * print_alphabet_x10 - 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int num;

	for (num = 1; num <= 10; num++)
	{

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
