#include "main.h"
#include <stdio.h>

/**
 * print_rev- prints a string, followed by a new line,
 *	to stdout.
 * @s: pointer to string to print
 */

void print_rev(char *s)
{
	int i;
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
	}

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
