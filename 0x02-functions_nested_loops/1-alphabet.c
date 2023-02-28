#include "main.h"
/**
 * print_alphabet -Entry point
 * Description: prints alphabets in lowercase
 * followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char lowcaseletter = 'a';

	while (lowcaseletter <= 'z')
	{
		_putchar(lowcaseletter);
		lowcaseletter++;
	}
	_putchar('\n');
}
