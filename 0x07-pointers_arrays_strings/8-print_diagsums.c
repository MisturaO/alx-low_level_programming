#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - prints the sum of two diagonals of a square matrix
 *
 *@a:array
 *@size:size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
