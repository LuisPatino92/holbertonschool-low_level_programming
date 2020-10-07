#include "holberton.h"

/**
 * factorial - computes the factorial of a number
 *
 * @n: The number whose factorial is looked for
 *
 * Return: The result of the factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
