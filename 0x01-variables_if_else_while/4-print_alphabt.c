/*
 *Program: prints the alphabet in lowercase, 
 *followed by a new line.
 *Auth: Mistura Ojulari
 */

#include <stdio.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	
	putchar('\n');

	return (0);
}
