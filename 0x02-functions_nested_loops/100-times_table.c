#include "holberton.h"

/**
 * print_times_table - Prints the times table
 *
 * @n: The table to be printed
 * Return: Void
 */

void print_times_table(int n)
{
	int i, j, num;

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
				num = i * j;

				if (num < 10)
				{
					_putchar(num + 48);
				}
				else if (num < 100)
				{
					_putchar((num / 10) + 48);
					_putchar((num % 10) + 48);
				}
				else
				{
					_putchar((num / 100) + 48);
					_putchar(((num / 10) % 10) + 48);
					_putchar((num % 10) + 48);
				}
				if (j != n)
				{
					_putchar(44);
					_putchar(32);
				}
				if ((i * (j + 1)) < 10)
				{
					_putchar(32);
					_putchar(32);
				}
				else if ((i * (j + 1)) < 100)
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
}
