#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size - a; b++)
			_putchar(' ');
		for (c = 1; c <= a; c++)
			_putchar('#');
		_putchar('\n');
	}
	(size <= 0) ? _putchar('\n') : 0;
}
