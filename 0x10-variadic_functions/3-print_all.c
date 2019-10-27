#include "variadic_functions.h"

/**
 * print_char - operate the values
 *
 * @par: given argument
 *
 * Return: Result of operation
 *
 */

void print_char(va_list par)
{
	printf("%c", va_arg(par, int));
}


/**
 * print_int - operate the values
 *
 * @par: given argument
 *
 * Return: Result of operation
 *
 */

void print_int(va_list par)
{
	printf("%d", va_arg(par, int));
}


/**
 * print_f - operate the values
 *
* @par: given argument
 *
 * Return: Result of operation
 *
 */

void print_f(va_list par)
{
	printf("%f", va_arg(par, double));
}



/**
 * print_s - operate the values
 *
 * @par: given argument
 *
 * Return: Result of operation
 *
 */

void print_s(va_list par)
{
	char *temp;

	temp = va_arg(par, char *);

	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}



/**
 * print_all - return sum of all arguments
 *
 * @format: undefined numbers of parameters
 *
 * Return: fail-0 success-sum
 */


void print_all(const char * const format, ...)
{
	char *sep;
	va_list par;

	op print_a[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	int i = 0;
	int k;

	va_start(par, format);
	sep = "";
	while (format && format[i])
	{

		k = 0;
		while (k < 4)
		{
			if (format[i] ==  *print_a[k].symbol)
			{
				printf("%s", sep);
				(*print_a[k].f)(par);
				sep = ", ";
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(par);
}
