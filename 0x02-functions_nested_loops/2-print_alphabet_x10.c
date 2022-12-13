#include "main.h"

/**
 *print_alphabet_x10- prints 10 times the alphabet
 *
 * _putchar: prints to standard output
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
