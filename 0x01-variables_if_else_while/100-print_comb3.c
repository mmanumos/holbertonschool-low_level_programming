#include <stdio.h>

/**
 * main - Prints two-digits
 * num : variable
 *
 * Description: Prints numbers until 89
 *combinates two digits without repetition
 * Return: Always 0
 */


int main(void)
{
	int num1 = '0';
	int num2;

	while (num1 <= '8')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			if ((num1 != num2) && (num1 < num2))
			{
				putchar(num1);
				putchar(num2);
				if (num1 < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
