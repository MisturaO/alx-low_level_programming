#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: param name to print
 * @f: prints output of other functions
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
