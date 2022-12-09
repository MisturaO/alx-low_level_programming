/*
 * Program: A program that prints all possible
 *combinations of single-digit numbers separated
 * by commas and white space
 *Auth: Mistura Ojulari
 */

#include <stdio.h>


/**
 * main- Source code entry point.
 *Return: Always returns o.
 */


int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');

	return (0);
}
