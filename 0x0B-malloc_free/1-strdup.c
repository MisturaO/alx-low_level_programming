#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 	in memory, which contains a copy of the string
	given as a parameter.
 * @str: pointer param
 *
 * Return: returns a pointer to the duplicated string
 	(success), and returns NULL (fail).
 */

char *_strdup(char *str)
{
	char *s;
	int i, lenght = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		lenght++;

	s = malloc(sizeof(char) * (lenght + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	return (s);
}
