#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: string input to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == \0)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(char (*s + 1));
}
