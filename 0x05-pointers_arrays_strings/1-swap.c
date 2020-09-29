#include "holberton.h"

/**
 * swap_int - swaps the values of two addresses
 *
 * @a: The pointer to first int
 * @b: The pointer to second int
 *
 */
void swap_int(int *a, int *b)
{
	int valA, valB;

	valA = *a;
	valB = *b;

	*a = valB;
	*b = valA;

}
