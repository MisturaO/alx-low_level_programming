#include "main.h"
#include <string.h>

/**
 * _strlen- function that returns the length of a string.
 * @s: string lenght to return
 *
 * Return: returns the lenght of string.
 *
 */

int _strlen(char *s)
{
	int a;
	int lenght = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		lenght++;
	}

	return (lenght);
}
