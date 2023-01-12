#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments in argv
 * @argv: array of pointers to the  argument
 *
 * Return: If the program does not receive two arguments 1,
 *	If the program  receive two arguments 0.
 */


int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);

	return (0);
}
