#include <stdio.h>

/**
 * main - Numbers of base 16
 * letter: letter
 *
 * Description: Prints lowercase number
 * Return: Always 0
 */


int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
		if (letter == 'f')
		{
			putchar('\n');
		}
	}
	return (0);
}
