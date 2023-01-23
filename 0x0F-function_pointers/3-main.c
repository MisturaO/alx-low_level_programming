#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calls the operators
 *@argc: arg
 * @argv:arg
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int (*opret)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opret = get_op_func(argv[2]);

	if (!opret)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opret(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
