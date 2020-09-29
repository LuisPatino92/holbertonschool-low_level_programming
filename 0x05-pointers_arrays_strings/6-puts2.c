#include "holberton.h"

/**
 * puts2 - prints a every other character of a string
 *
 * @str: The string to be reversed
 *
 */

void puts2(char *str)
{
	int i = 0, lenght;

	while (str[i] != 0)
		i++;

	lenght = i - 1;

	for (i = 0; i <= lenght; i = i + 2)
		_putchar(str[i]);

	_putchar(10);
}
