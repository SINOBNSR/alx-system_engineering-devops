#include "main.h"

/**
 * swap_int - swaps values.
 * Description: Swaps the values of two integers
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
