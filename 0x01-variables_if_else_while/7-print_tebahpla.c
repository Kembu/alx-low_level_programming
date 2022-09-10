#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: lowercase are reversed from
 * reverses lower from z to a
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
