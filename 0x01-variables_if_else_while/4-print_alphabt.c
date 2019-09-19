#include <stdio.h>

/**
 * main - Prints alphabet
 * letter: letter
 *
 * Description: Prints alphabet except  q & e
 * Return: Always 0
 */


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		if (letter == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
