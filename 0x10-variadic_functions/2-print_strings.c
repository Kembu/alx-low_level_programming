#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings in a variadic function
 * @separator: separates strings
 * @n: number of argument in elipses
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list print_strings;

	va_start(print_strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(print_strings, char*);

		if (string != NULL)
		{
			printf("%s", string);
		}
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_strings);
}
