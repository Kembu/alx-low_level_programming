#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers with commas in between
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list addNumbers;
	unsigned int i;

	va_start(addNumbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(addNumbers, int));
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(addNumbers);
}
