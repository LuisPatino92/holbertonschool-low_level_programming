#include "holberton.h"

/**
 * print_numbers - print the number from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
