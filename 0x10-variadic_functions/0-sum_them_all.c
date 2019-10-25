#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all arguments
 *
 * @n: undefined numbers of parameters
 *
 * Return: fail-0 success-sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list my_valist;
	unsigned int sum = 0, i;

	if (n > 0)
	{
		va_start(my_valist, n);

		for (i = 0; i < n; i++, sum += va_arg(my_valist, unsigned int))
			;

		va_end(my_valist);
	}

	return (sum);
}
