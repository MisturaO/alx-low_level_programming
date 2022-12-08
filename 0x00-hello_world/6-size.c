#include <stdio.h>

/**
 * main - Code entry point
 * printf: prints string to standard output with a newline
 * Return: 0
 */

int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
