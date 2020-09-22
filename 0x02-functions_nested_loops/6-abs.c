#include "holberton.h"

/**
 * _abs - Compute the absolute value of the input
 *
 * @n: Value whose absolute value is needed
 * Return: absValue the absolute value of n
 */

int _abs(int n)
{
	int absValue;

	if (n < 0)
		absValue = -1 * n;
	else
		absValue = n;

	return (absValue);

}
