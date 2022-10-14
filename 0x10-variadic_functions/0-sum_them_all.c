#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - adds all input parameters
 * @n: number of parameters
 *
 * Return: sum of input parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addnumbers;
	unsigned int i;
	int sum;

	va_start(addnumbers, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(addnumbers, int);
		}
		va_end(addnumbers);
	}
	return (sum);
}
