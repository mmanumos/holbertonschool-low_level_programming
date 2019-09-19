#include <stdio.h>

/**
 * main - Prints alphabet
 * letter: letter
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0
 */


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
		if (letter == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
