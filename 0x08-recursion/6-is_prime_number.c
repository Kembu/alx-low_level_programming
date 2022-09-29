#include "main.h"

/**
 * _is_prime_number - checks if int is a prime number
 *
 * @n: int to be checked
 * @start: number to start checking from
 * Return: 1 if true else 0
 */
int is_prime(int n, int start);

int _is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is prime
 * @n: number to be checked
 * @start: number to start checking from
 *
 * Return: 1 if umber is priime else 0
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
