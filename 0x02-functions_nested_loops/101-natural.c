#include <stdio.h>

/**
 * main - Calculates the sum of 3 and 5 multipliers under n
 *
 * Return: Always 0 success
 */

int main(void)
{
	int suma = 0, n = 1024, i;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma = suma + i;
		}
	}

	printf("%d\n", suma);
	return (0);
}
