#include "holberton.h"

/**
 * print_triangle - Print a triangle with the desired size
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= (size - i); j++)
			_putchar(32);

		for (j = 0; j < i; j++)
			_putchar(35);

		_putchar(10);
	}
}
