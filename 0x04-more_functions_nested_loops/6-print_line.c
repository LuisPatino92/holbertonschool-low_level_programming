#include "holberton.h"

/**
 * print_line - Prints a given number of _
 *
 * @n: Number of Dashes to be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}

	_putchar(10);
}
