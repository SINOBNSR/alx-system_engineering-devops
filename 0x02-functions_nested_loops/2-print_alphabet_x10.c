#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints the alphabet x10 times in lowercase,
 * followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');
		
		x++;
	}
}
