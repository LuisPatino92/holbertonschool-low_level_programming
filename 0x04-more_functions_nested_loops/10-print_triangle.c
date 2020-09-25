#include "holberton.h"

/**
 * print_triangle - Print a triangle with the desired size
 *
 * @size: The size of desired triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
				_putchar(32);

			for (j = 0; j < i; j++)
				_putchar(35);

			_putchar(10);
		}
	}
}
