#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 *
 * @s: The string to be printed in reverse
 *
 */

void print_rev(char *s)
{
	int i, lenght;

	i = 0;

	while (s[i] != 0)
		i++;

	lenght = i - 1;

	for (i = 0; i <= lenght; i++)
		_putchar(s[lenght - i]);

	_putchar(10);
}
