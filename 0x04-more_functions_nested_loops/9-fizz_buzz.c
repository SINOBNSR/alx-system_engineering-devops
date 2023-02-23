#include <stdio.h>

/**
 * main - prints Fizz for multiples of three, Buzz for multiples of five,
 * and FizzBuzz for multiples of both three and five.
 * Otherwise, prints the number.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		(i % 3 == 0) ? printf("Fizz") : 0;
		(i % 5 == 0) ? printf("Buzz") : 0;
		(i % 3 != 0 && i % 5 != 0) ? printf("%d", i) : 0;
		(i != 100) ? printf(" ") : 0;
	}
	printf("\n");
	return (0);
}
