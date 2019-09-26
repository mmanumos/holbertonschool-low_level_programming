#include "holberton.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}
		if(number < 100){
			putchar(' ');
		}

	}
	printf("\n");
	return (0);
}
