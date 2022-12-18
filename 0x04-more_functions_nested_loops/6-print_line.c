#include "main.h"

/**
 * print_line- a function that draws a straight line in the terminal.
 *@n: The numbers of lines to print
 *_putchar: prints to stdout
 */

void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar(95);
		if (n == 0 && n < 0)
			_putchar('\n');
	}
	_putchar('\n');
}
