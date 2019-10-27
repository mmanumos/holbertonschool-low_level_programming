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

	va_start(par, n);

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			printf("%d", va_arg(par, int));

			if ((i != n) && (separator != NULL))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(par);
}
