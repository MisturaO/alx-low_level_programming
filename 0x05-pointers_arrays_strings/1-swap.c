#include "main.h"

/**
 * swap_int- function that swaps the values of two integers.
 * @a: number to swap
 * @b: number to swap
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
