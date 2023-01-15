#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: firts string param
 * @s2: second string param
 *
 * Return: returns pointer that points to the allocated space
 *	in memory, which contains s1, followed by the
 *	first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, c, str_num, len;

	str_num = n;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	if (str_num >= strlen(s2))
		str_num = strlen(s2);
	len = strlen(s1) + str_num + 1;

	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (c = 0; c < str_num; c++)
	{
		p[i + c] = s2[c];
	}

	return (p);
	free(p);
}
