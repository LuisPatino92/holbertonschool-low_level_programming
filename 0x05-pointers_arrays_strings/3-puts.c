#include "holberton.h"

/**
 * _puts - Prints a string
 *
 * @str: The string to be printed
 *
 */

void _puts(char *str)
{
	int i, lenght;

	i = 0;

	while (str[i] != 0)
		i++;

	lenght = i;

	for (i = 0; i < lenght; i++)
		_putchar(str[i]);

	_putchar(10);
}
