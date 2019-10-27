#include "variadic_functions.h"

/**
 * print_strings - return sum of all arguments
 *
 * @separator: undefined numbers of parameters
 * @n:number of elements
 *
 * Return: fail-0 success-sum
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list par;
	unsigned int i;
	char *temp;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(par, n);

	for (i = 1; i <= n; i++)
	{
		temp = va_arg(par, char *);
		printf("%s", (temp  != NULL) ? temp : "(nil)");

		if ((i != n) && (separator != NULL))
			printf("%s", separator);

		if (i == n)
			printf("%c", '\n');
	}

	va_end(par);
}
