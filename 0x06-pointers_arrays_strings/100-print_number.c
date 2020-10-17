#include "holberton.h"

int rec_intPrint(int n, int i);

/**
 * print_number - Prints a number
 *
 * @n: The number to be printed
 */

void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	else if (n == 0)
	{
		_putchar(48);
	}

	rec_intPrint(n, 1);
}

/**
 * rec_intPrint - Prints a number recursively
 * @n: The number to be printed
 * @i: An auxiliar to control the char by char printing
 *
 * Return: Always 0 (success)
 */

int rec_intPrint(int n, int i)
{
	if (n / i == 0)
		return (0);

	rec_intPrint(n, i * 10);

	_putchar(((n / i) % 10) + 48);

	return (0);
}
