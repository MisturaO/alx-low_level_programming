/*
 * Program: a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line
 * Auth: Mistura Ojulari
 */

#include <stdio.h>

/**
 * main- Source code entry point.
 *Return: Always 0
 */

int main(void)
{
	char b = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}


