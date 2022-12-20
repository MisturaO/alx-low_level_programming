#include <stdio.h>

/**
 *  print_array- prints n elements of an array of integers
 * @n: array's lenght
 * @a: array to print
 */

void print_array(int *a, int n)
{
	int lenght;

	for (lenght = 0; lenght < n; lenght++)
	{
		printf("%d, ", a[lenght]);
	}
	putchar('\n');
}
