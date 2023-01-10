#include "main.h"
#include <stdio.h>

/**
 *  _puts_recursion - prints a string, followed by a new line.
 * @s: input param
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		puts(s);
	else
		_putchar('\n');
}
