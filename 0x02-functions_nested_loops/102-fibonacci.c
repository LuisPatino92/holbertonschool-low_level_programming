#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers
 *
 * Return: Always 0 success.
 */

int main(void)
{
	long int i, p = 1, u = 2, a;

	printf("%ld, %ld, ", p, u);

	for (i = 3; i <= 50; i++)
	{
		a = p + u;
		printf("%ld", a);

		p = u;
		u = a;

		if (i != 50)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
