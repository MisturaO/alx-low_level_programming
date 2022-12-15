#include "main.h"
#include <ctype.h>

/**
 * _isupper- checks for uppercase character
 * @c: number to check.
 *
 * Return: returns 1 (Sucess) OR 0 if (Failure)
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
