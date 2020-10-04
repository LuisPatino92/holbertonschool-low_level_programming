#include <stdio.h>

/**
 * main - prints the largest prime factor of a big number
 *
 * Return: Always 0 succeed
 */

int main(void)
{
	long int n = 612852475143, i, maxprime = 0;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			maxprime = i;
			i--;
		}

		}
	printf("%ld\n", maxprime);
	return (0);

}
