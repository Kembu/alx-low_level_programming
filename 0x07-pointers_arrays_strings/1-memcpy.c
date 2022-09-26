#include "main.h"

/**
 * _memcpy - copies memory of area
 *@src: source memory to be copied from
 *@dest: memory area to be copied to
 *@n: number of bytes to be copied
 *
 *Return: pointer to copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

		for (; i < n; i++)
		{
			dest[i] = src[i];
		}
	return (dest);
}
