#include <stdio.h>

/**
 * main - prints the largest prime factor of a big number
 *
 * Return: Always 0 succeed
 */

int main(void)
{
	int n = 152488797, i, maxprime = 0, nAux;

	nAux = n;

	for (i = 2; i <= n / 2; i++)
	{
		if (nAux % i == 0)
		{
			nAux = nAux / i;
			maxprime = i;
			i--;
		}

	}
	printf("%d", n);
	return (0);

}
