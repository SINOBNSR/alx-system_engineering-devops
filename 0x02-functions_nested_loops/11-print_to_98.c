#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: prints all natural number from n to 98
 *@n: is the starting number
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			x++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
