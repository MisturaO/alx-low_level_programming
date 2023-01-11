#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its filename, followed by a new line
 * @argc: numbers of arguments used with the program
 * on the command line.
 * @argv: an array of pointer to the arguments.
 *
 *Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
