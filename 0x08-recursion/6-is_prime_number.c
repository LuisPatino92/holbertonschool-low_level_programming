#include "holberton.h"

int _dirtyTrick(int n, int i);


/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: The number to be checked
 *
 * Return: 1 if is a prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n < 2)
		return (0);
	else
		return (_dirtyTrick(n, 2));
}

/**
 * _dirtyTrick - Allows to use counters
 *
 * @n: Exactly the same number that's been checked
 * @i: The counter
 *
 * Return: 1 if is a prime number 0 otherwise
 */

int _dirtyTrick(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);

	if (i == n)
		return (1);
	else
		return (_dirtyTrick(n, ++i));
}
