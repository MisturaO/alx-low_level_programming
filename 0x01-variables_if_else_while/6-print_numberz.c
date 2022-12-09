/*
 *Program: prints all single digit numbers
 *of base 10 starting from 0, followed by a new line.
 *Using putchar function
 *Auth: Mistura Ojulari
 */

#include <stdio.h>


/**
  *main- Source code entry point
  *Return: Always 0
  */


int main(void)
{
	int a = '0';

	while(a <= '9')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
