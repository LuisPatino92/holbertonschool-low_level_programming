#include <stdio.h>
#include <stdlib.h>

/**
 * main - Computes the multiplication of two numbers
 *
 * @argc: Num of arguments received
 * @argv: Array with the arguments received
 *
 * Return: 0 if two number received, 1 error
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
