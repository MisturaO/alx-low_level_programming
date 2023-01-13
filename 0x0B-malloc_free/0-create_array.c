#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char.
 * @size: size of the array.
 * @c: char input param
 *
 * Return: Returns NULL if size = 0. Returns a
 *	pointer to the array (success), or NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
