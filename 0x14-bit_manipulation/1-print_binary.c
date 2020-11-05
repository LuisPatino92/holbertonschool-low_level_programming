#include "holberton.h"

/**
 * print_binary - Prints a unsigned long int in binary
 *
 * @n: The number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int aux = 2147483648;
	int start_flag = 0, i;

	for (i = 32; i > 0; i--)
	{
		if (((aux & n) == aux) && start_flag == 0)
			start_flag = 1;

		if (start_flag == 1)
		{
			if (aux == (aux & n))
				_putchar(49);
			else
				_putchar(48);
		}
		aux = aux >> 1;
	}
	if (start_flag == 0)
		putchar(48);
}
