#include "main.h"

/**
 * _is_prime_number - checks if int is a prime number
 *
 * @n: int to be checked
 * Return: 1 if true else 0
 */

int _is_prime_number(int n)
{
	int tmp = 1;

	if (tmp >= n)
		return (0);
	if (n % tmp == 0)
		return (1);

	return (_is_prime_number(n % (tmp + 1)));
}
