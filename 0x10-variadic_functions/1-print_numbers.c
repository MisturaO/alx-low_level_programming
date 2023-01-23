#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL)
			printf("%c", *separator);
	}

	va_end(num);
	putchar('\n');
}
