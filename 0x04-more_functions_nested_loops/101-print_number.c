#include "holberton.h"

/**
 * count_digits - Counts how many digits has the int input.
 * @number: integer whose gigits are going to be counted.
 *
 * Return: Always 0.
 */

int count_digits(int number)
{
	int i = 1, j = 0, divided = 10;

	if (number < 0)
		number = -number;

	while (divided >= 10)
	{
		divided = number / i;
		i = 10 * i;
		j++;
	}

	return (j);
}

/**
 * pot - This function returns the value of base ** exp.
 * @base: the base for the potentiation operation.
 * @exp: the exponent for the potentiaton operation.
 *
 * Return: result.
 */

int pot(int base, int exp)
{
	int i, result = 1;

	for (i = 1; i < exp; i++)
	{
		result = result * base;
	}

	return (result);
}

/**
 * print_number - prints a number digit by digit
 *
 * @n: the integer to print
 * Return: Nothing
 */

void print_number(int n)
{

	int digits, currentDigit, i, signo = 1;

	if (n < 0)
	{
		signo = 0;
		n = -n;
	}

	digits = count_digits(n);

	for (i = 0; i < digits; i++)
	{
		currentDigit = n / (pot(10, digits - i));
		currentDigit = currentDigit % 10;

		if (signo == 0)
		{
			_putchar(45);
			signo = 1;
		}

		_putchar('0' + currentDigit);

	}

}
