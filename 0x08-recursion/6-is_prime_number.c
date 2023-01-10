#include "main.h"

int prime(int a, int i);

/**
 * is_prime_number - returns prime numbers.
 * @n: input num param.
 *
 *Return: Returns 1 if n is a prime num, 0 if not,
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime recursively
 * @a: input num param
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int prime(int a, int i)
{
	if (i == 1)
		return (1);
	if (a % i == 0 && i > 0)
		return (0);
	return (prime(a, i - 1));
}
