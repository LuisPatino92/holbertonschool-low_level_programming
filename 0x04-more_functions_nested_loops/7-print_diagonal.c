#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal made with \
 *
 * @n: The size of the diagonal
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}

}
