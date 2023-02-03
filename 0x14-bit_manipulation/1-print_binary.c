#include "main.h"

/**
 *print_binary - prints binary rep of a number
 *@n:no. to print
 *Return:void
 */
void print_binary(unsigned long int n)
{
	unsigned int set = 1;

	if (n > 1)
		print_binary(n >> 1);
	if ((n & set) == 1)
		_putchar('1');
	else
		_putchar('0');
}
