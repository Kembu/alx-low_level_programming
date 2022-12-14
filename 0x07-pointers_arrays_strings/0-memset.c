#include "main.h"

/**
 * _memset - fillsa block of memory with a constant byte
 * @s: address of a memory block
 * @b: character to be used
 * @n: number of bytes
 *
 * Return: updated string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
