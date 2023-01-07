#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: first param
 * @accept: second param
 * Return: returns a pointer to the byte in s that matches one of the
 * bytes in accept,  or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);

	if (r != NULL)
		return (r);
	else
		return (NULL);
}
