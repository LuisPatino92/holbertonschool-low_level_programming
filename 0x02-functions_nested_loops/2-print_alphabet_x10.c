#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times
 *
 *
 * Return: Void
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{

		for (i = 97; i < 123; i++)
		{

			_putchar(i);

		}

		_putchar('\n');
	}

}
