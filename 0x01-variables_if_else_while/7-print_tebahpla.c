/* Proram: a program that prints the lowercase
 *alphabetin reverse, followed by a new line
 *Auth: Mistura Ojulari
 */

#include <stdio.h>

/**
  *main- Source code entry point
  *Return: Always 0
  */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return(0);
}
