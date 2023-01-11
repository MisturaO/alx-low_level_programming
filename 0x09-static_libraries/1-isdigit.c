#include "main.h"

/**
 * _isdigit- This function checks for a digit (0 through 9).
 * @c: digit to check.
 *
 * Return: returns 1 if (Sucess) OR 0 if (Failure)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
