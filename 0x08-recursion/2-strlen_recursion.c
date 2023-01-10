#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *
 *@s: pointer to char array param
 *Return: returns s
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i = strlen(s);
	}
	return (i);
}
