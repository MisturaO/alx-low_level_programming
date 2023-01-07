#include <stdio.h>
#include <string.h>
#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *p;
	p = strstr(haystack, needle);

	return (p);
}
