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
	int num3 = '0';

	for (num = '0'; num <= '7'; num++)
	{

		for (num2 = '1'; num2 <= '9'; num2++)
		{
			
			for (num3 = '2'; num3 <= '9';num3 ++ )
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num == '7' && num2 == '8' && num3 == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}





	putchar('\n');
	return (0);
}
