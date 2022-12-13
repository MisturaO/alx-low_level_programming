#include "main.h"

/**
 * _islower- checks for letters in lowercase.
 *
 * @c: var to check numbers
 *
 * Return: returns 1 (Sucess) OR 0 (Failure)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
