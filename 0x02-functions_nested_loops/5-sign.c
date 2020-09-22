#include "holberton.h"

/**
 * print_sign - Check the sign of the input
 *
 * @n: int number whose sign is gonna be checked
 *
 * Return: 1 if positive, 0 if 0, -1 if negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
