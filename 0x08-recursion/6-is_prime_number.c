#include "holberton.h"

/**
 * is_prime_number - compare the given number
 * with the result of get_prime
 *
 *
 * @n : given number
 *
 * Return: 0 non-prime 1 yes-prime
 */

int is_prime_number(int n)
{
	int p = 0, count;

	if (n <= 1)
		p = 0;

	else
	{
		count = 2;
		p = get_prime(n, count);
	}
	return (p);

}


/**
 * get_prime - get the major prime of the given number
 *
 *
 * @n : given number
 * @count: increnter to divide the given number who's the prime number
 *
 * Return: the major prime number
 *
 */

int get_prime(int n, int count)
{

	int p = 0;

	if (n == count)
		p = 1;

	else if (n % count == 0)
		p = 0;

	else
		p = get_prime(n, (count + 1));

	return (p);
}
