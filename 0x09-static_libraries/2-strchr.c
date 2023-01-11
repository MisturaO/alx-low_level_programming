#include "main.h"
#include <stdio.h>

/**
 * _strchr-function that locates a character in a string.
 * @s:pointer to character
 * @c: character param
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
