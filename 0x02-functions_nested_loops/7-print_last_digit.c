#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the las digit of the integer argument
 *
 * @n: The integer argument
 * Return: The las digit of the integer
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld >= 0)
	{
		_putchar(ld + '0');
	}
	else
	{
		ld = -1 * ld;
		_putchar(ld + '0');

	}

	return (ld);
}
