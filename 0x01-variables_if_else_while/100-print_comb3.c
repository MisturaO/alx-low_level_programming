/*
 * Program: Write a program that prints all
 * possible different combinations of two digits.
 * Auth: Mistura Ojulari
 */

#include <stdio.h>

/**
 *main- Source code starting point.
 *Return: Always 0
 */

int main(void)
{
	int a = '0';

	while (a <= 89)
	{
		if (a <= '9')
		{
			putchar('0');
		}
		else if (a <= '9')
		{
			putchar(a);
		}
		else if (a < 89)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');
	return (0);
}
