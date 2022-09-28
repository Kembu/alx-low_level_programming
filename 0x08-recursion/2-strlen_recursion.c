#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: pointer to a string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int result;

	if (*s != '\0')
	{
		result = _strlen_recursion(s + 1) + 1
			return (result);
	}
	else
		return (0);
}
