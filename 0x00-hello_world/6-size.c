#include <stdio.h>

/**
 * main - Code entry point
 * Return: returns 0
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char c));
	printf("size of an int: %lu byte(s)\n", sizeof(int i));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int l));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int li));
	printf("Size of a float: %lu byte(s)\n", sizeof(float fl));
	return (0);
}
