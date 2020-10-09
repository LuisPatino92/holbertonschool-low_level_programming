#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers
 *
 * Return: Always 0 success.
 */

int main(void)
{
	double i, p = 1, u = 2, a;

	printf("%.0lf, %.0lf, ", p, u);

	for (i = 3; i <= 98; i++)
	{
		a = p + u;
		printf("%.0lf", a);

		p = u;
		u = a;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
