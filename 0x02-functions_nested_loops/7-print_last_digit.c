#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number
 * @n: is an integer
 * Return: integer
 */
int print_last_digit(int n)
{
	int i;

	n = i % 10;
	if (i < 0)
		n = -n;
	_putchar (n+ '0');
	return (n);
}
