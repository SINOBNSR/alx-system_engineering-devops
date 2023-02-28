#include <stdio.h>

/**
 * main - Entry
 * Descrpition: Prints the sum of all multiples of 3 or 5
 * up to 1023
 * Return: Always (Success)
 */
int main(void)
{
	int i, x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}

		i++;
	}

	printf("%d\n", x);
	return (0);
}
