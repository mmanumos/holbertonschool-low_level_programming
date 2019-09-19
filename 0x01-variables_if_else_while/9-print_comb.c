#include <stdio.h>

/**
 * main - Prints simgle-digit
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
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
