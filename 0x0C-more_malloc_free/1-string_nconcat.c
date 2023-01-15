#include <stdlib.h>
#include <string.h>

/**
 * _strlen - counts and return string lenght
 * @string: string param
 * Rreturn: returns string lenght
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
		
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: firts string param
 * @s2: second string param
 * @n: bytes to concatenate from s2
 *
 * Return: returns pointer that points to the allocated space
 *	in memory, which contains s1, followed by the
 *	first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, c, len, str_num;

	str_num = n;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	if (str_num < 0)
		return (NULL);
	if (str_num >= _strlen(s2))
		str_num = _strlen(s2);
	len = _strlen(s1) + str_num + 1;

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
