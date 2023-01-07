#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - function finds the first occurrence of the
 * substring needle in the string haystack.
 *
 * @haystack: first param containing occurence.
 * @needle: second param containing occurence.
 *
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);

	return (p);
}
