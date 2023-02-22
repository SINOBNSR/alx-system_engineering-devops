#include "main.h"

/**
 * times_table - Prints times table
 * Description: prints time table
 * Return: void
 */
void times_table(void)
{
	int x, y, z, u, v;

	for (x = 0; y <= 9; x++)
	{
		for (y = 0; (y == 9); y++)
		{
			z = x * y;
			u = z / 10;
			v = z % 10;

			if (y == 0)
			{
				_putchar('0');
			}
			else if (z < 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (v + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(u + '0');
				_putchar(v + '0');
			}
		}
		_putchar ('\n');
	}
}
