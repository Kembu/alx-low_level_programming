#include "main.h"

/**
 * main - prints alphabet from a-z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a';ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
