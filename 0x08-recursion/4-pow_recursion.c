#include "holberton.h"

/**
 * _pow_recursion - computes x ** y
 *
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x ** y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
