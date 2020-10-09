#include "holberton.h"

/**
 * print_times_table - Prints the times table
 *
 * @n: The table to be printed
 * Return: Void
 */

void print_times_table(int n)
{
	int i, j, nm;

	if (n < 0 || n > 15)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				nm = i * j;
				if (nm < 10)
				{
					_putchar(nm + 48);
				}
				else if (nm < 100)
				{
					_putchar((nm / 10) + 48);
					_putchar((nm % 10) + 48);
				}
				else
				{
					_putchar((nm / 100) + 48);
					_putchar(((nm / 10) % 10) + 48);
					_putchar((nm % 10) + 48);
				}

				if (j != n)
				{
					_putchar(44);
					_putchar(32);
				}
				if ((i * (j + 1)) < 10 && (j != n))
				{
					_putchar(32);
					_putchar(32);
				}
				else if ((i * (j + 1)) < 100 && (j != n))
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
}
