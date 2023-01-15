#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 *
 * Return: returns pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);
		
	return(point);
}
