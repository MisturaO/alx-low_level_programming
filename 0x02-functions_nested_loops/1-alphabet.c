#include "main.h"

/**
 * main- prints the alphabet, in lowercase,
 *followed by a new line.
 * Return: returns 0.
 */

void print_alphabet(void)
{
	int a;
	for(a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');

	return;
}
