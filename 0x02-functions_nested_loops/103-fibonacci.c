#include <stdio.h>

/**
 * main - sums fibonacci even numbers les than 4M
 *
 * Return: Always 0 success.
 */

int main(void)
{
	long int i, p = 1, u = 2, a = 0, limsup = 4000000, suma = 2;

	for (i = 3; a <= limsup; i++)
	{
		a = p + u;

		if (a % 2 == 0)
		{
			suma = suma + a;
		}

		p = u;
		u = a;
	}

	printf("%ld\n", suma);

	return (0);
}
