#include "main.h"

/**
 * _memset - fill memory
 * @s: input string
 * @b: data
 * @n: get index
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
