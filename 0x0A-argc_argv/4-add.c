#include <stdio.h>
#include <stdlib.h>
/**
 * main - Sums positive numbers
 *
 * @argc: Counter of arguments passed
 * @argv: Array with string passed as arguments.
 *
 * Return: 0 success, 1 error (a number has symbols)
 */

int main(int argc, char **argv)
{
	int i, j, suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}

		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
