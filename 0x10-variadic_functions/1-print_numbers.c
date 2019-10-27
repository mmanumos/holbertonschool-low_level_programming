#include "variadic_functions.h"

/**
 * print_numbers - return sum of all arguments
 *
 * @separator: undefined numbers of parameters
 * @n:number of elements
 *
 * Return:fail-0 success-sum
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list par;
	unsigned int i;

	if (n < 1)
		return;

	va_start(par, n);

	for (i = 0; i <= n; i++)
	{
		printf("%d", va_arg(par, unsigned int));

		if ((i != n) && (separator != NULL))
			printf("%s", separator);

		if (i == n)
			printf("%c", '\n');
	}

	va_end(par);
}
