/*
 * Program: A program that prints the alphabe.
 * Auth: Ojulari Mistura
 */


#include <stdio.h>


/**
  * main- source code entry point
  * Return: Always 0
  */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
