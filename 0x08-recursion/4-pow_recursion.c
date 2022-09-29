#include "main.h"

/**
 * _pow_recursion - prints power of an integer
 *
 * @x: integer to be raised
 * @y: power to be raised to
 *
 * Return: result of number raised
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
		return (x * _pow_recursion(x, y - 1))
}
