#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be checked for
 *
 * Return: pointer to where character c is or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (s[i] == c)
		{
		return (s[i]);
		}
		else
		return (0);
	}
}
