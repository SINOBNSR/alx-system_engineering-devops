#include "main.h"
/**
 * print_sign - Entry point
 * Description:  a function that prints the sign of a number.
 * @n: The number to be checked
 * Return: 0 if the number entered is 0, -1 for negatives, 1 for positives
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
