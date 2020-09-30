#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints the last half of a string
 *
 * @str: The string to be half printed
 *
 */

void puts_half(char *str)
{
	int i = 0, lenght, start;


	while (str[i] != 0)
		i++;

	lenght = i;

	if (lenght % 2 == 0)
		start = lenght / 2;
	else
		start = ((lenght - 1) / 2) + 1;

	for (i = start; i < lenght; i++)
		_putchar(str[i]);

	_putchar(10);
}
