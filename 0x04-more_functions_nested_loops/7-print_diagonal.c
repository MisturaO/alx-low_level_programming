#include "main.h"

/**
 * print_diagonal- draws a diagonal line on the terminal.
 *@n: numbers of lines to draw.
 */

void print_diagonal(int n)
{
	int l, s;

	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (l < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
