#include "holberton.h"

int _dirtyTrick(int n, int i);

/**
 * _sqrt_recursion - compute the square root of n
 *
 * @n: - The number whose sqrt is wanted
 *
 * Return: The sqrt of n, -1 if dont have one
 */

int _sqrt_recursion(int n)
{
	return (_dirtyTrick(n, 0));

}

/**
 * _dirtyTrick - Allows a counter
 *
 * @n: Exactly the same number
 * @i: An acumulator
 *
 * Return: i, the value of the sqrt
 */

int _dirtyTrick(int n, int i)
{
	if (n < 0)
		return (-1);

	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_dirtyTrick(n, ++i));
	else
		return (-1);
}
