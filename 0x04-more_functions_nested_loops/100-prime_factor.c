#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints the largest prime factor of
 * the number 612852475143.
 * Return: 0
 */

int main(void)
{
	long int a = 612852475143;
	long int b;

	for (b = 2; b < a; b++)
	{
		while (a % b == 0)
			a /= b;
	}

	printf("%ld\n", a);

	return (0);
}
