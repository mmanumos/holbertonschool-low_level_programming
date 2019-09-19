#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints if a number is positive or negative
 *@n: The number to be checked
 *
 *Return: Always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n",n);
	}
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	if (n == 0)
	{
		printf("%d is 0\n",n);
	}
	return (0);
}
