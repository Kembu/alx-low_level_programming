#include "main.h"

/**
 * factorial - computes factorial of a number
 *
 * @n: number which factorial to be calculated
 * Return: factorial of int n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (factorial(n - 1) * n);
}
