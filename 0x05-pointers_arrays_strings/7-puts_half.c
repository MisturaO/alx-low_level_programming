#include "main.h"

/**
 * puts_half- prints half of a string
 *@str: string to print.
 */

void puts_half(char *str)
{
	int lenght;
	int num;
	int i;

	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{
	}
	num = (lenght - 1) / 2;
	for (i = num + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
