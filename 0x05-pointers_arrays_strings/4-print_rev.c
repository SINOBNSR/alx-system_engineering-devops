#include"main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: the said string.
 * Return: 0 (success)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
