#include "main.h"
#include <ctype.h>

/**
 * _isalpha- checks for alphabetic character.
 *
 * islapha: checks the c var.
 * @c: checks alphabetic
 * Return: returns 1 (Success) OR 0 (Failure)
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
