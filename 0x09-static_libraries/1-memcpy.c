#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer dest
 * @src: pointer src
 * @n: input number
 *
 * Description: copies n bytes from memory area src to memory area dest
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
