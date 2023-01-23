#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: first number
 * @b: second number
 * Return: returns sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the sum of a and b
 * @a: first number
 * @b: second number
 * Return: returns sum of a and b
 */

int op_sub(int a, int b)
{

	return (a - b);
}

/**
 * op_mul - returns the mul of a and b
 * @a: first number
 * @b: second number
 * Return: returns the result of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a and b
 * @a: first number
 * @b: second number
 * Return: returns result of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns the sum of a and b
 * @a: first number
 * @b: second number
 * Return: returns sum of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
