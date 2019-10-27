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
	if (temp != NULL)
	{
		printf("%s", temp);
	}
	else
	{
		printf("(nil)");
	}
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

	op print_a[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_f},
		{"s", print_s}
	};


	va_list par;
	int i = 0, k;

	char *sep;

	va_start(par, format);

	sep = "";
	while ((format[i] != '\0') && (format))
	{

		k = 0;

		while (print_a[k].symbol != NULL)
		{
			if (*print_a[k].symbol == format[i])
			{
				printf("%s", sep);
				print_a[k].f(par);
				sep = ", ";
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(par);
}
