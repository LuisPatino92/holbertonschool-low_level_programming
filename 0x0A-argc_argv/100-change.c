#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate amount of coins used as change
 *
 * @argc: - Entry parameter, changed after with n
 * @argv: Array of arguments
 *
 * Return: 0 success, 1 otherwise
 */

int main(int argc, char **argv)
{
	int n, i, coins, coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
	{
		printf("0\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			while (n - coin[i] >= 0)
			{
				n = n - coin[i];
				coins++;
			}
		}

		printf("%d\n", coins);
		return (0);
	}
}
