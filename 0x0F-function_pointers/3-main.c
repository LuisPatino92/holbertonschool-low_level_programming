#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Computes an operation between two ints and prints it
 *
 * @argc: Number of passed arguments
 * @argv: Array with all the passed arguments
 *
 * Return: Various exit codes on Fail - 0 on succes
 */

int main(int argc, char **argv)
{
	char valid_operators[] = {'+', '-', '*', '/', '%'};
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	for (i = 0; i < 5; i++)
	{
		if (argv[2][0] == valid_operators[i])
			break;

		if (i == 4)
		{
			printf("Error\n");
			exit(99);
		}

	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);

}
