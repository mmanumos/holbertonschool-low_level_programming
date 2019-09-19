#include <stdio.h>

/**
 * main - Prints number base 10
 * num : variable
 *
 * Description: Prints numbers until 9
 * Return: Always 0
 */


int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
