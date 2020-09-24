#include "holberton.h"

/**
 * print_square - prints a square of given size
 *
 * @size: The size of the desired square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}

}
