/*
 * Program: A program that prints the alphabet in lowercase, followed by a new line.
 *
 * Auth: Ojulari Mistura
 */


#include <stdio.h>


/**
  * main- source code entry point
  * 
  * Return: Always 0
  */

int main()
{
	char a;

	for(a='a';a<='z';a++)
		putchar(a);

	putchar('\n');

	return (0);
}						
