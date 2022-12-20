#include "main.h"

/**
 * rev_string-reverses a string.
 *
 * @s: the string
 */
void rev_string(char *s)
{
	int len, a, b;
	int r1, r2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	a = len -1;
	b = 0;

	while (a > b)
	{
		r1 = s[b];
		r2 = s[a];
		s[b] = r2;
		s[a] = r1;
		a--;
		b++;

	}
}

	 
