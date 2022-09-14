#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes value of absolute integer
 *@n: this is the integer to be used in the function
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
