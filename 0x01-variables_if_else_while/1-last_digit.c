#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints last digint and verify
 *@n: The number to be checked
 *
 *Description: Get last digit of the number with % 10 and verify @n for each condition
 *Return: Always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	}
	if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, (n % 10));
	}

	return (0);
}
