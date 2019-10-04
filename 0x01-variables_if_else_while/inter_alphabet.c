#include <stdio.h>

/**
 * main - Prints alphabet
 * letter: letter
 *
 * Description: Prints alphabet dessindingly
 * Return: Always 0
 */


int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
		if (letter == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}
