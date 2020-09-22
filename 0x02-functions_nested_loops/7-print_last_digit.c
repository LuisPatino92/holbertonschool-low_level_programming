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
	int lastDigit;

	lastDigit = n % 10;

	return (lastDigit);
}
