#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the total number of arguments passed into it.
 * @argc: The number of arguments.
 * @argv: array of arguments
 *
 *Return: Always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
