#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first param
 * @s2: second param
 *
 * Return: If concatenation fails - NULL.
 *	if (success) return concatenated string params
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	p = malloc(sizeof(char) * len);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1[i]; i++)
		p[c++] = s1[i];
	for (j = 0; j < s2[j]; j++)
		p[c++] = s2[j];

	return (p);
	free(p);
}
