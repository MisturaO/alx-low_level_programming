#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers followed by
 *	a newline
 * @argc: number of arguments in argv
 * @argv: array of pointers to the arguments
 *	passed to the program
 *
 * Return: If one of the number contains symbols that
 *	 are not digits return 1, if not return 0.
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
