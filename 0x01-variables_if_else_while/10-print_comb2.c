#include <stdio.h>

/**
 * main - Prints two-digits
 * num : variable
 *
 * Description: Prints numbers until 99
 *combinates two digits
 * Return: Always 0
 */


int main(void)
{
	int num = '0';
	int num2 = '0';

	for (num = '0'; num <= '9'; num++)
	{

		for (num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num == '9' && num2 == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}





	putchar('\n');
	return (0);
}
