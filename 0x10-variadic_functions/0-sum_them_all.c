#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: sums up the anonymous argument
 *
 * Return: If n == 0, return 0, if not return the total sum of argument
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
