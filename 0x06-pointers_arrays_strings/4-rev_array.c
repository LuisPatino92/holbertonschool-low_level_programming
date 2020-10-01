#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: The array of int to be reversed
 * @n: The length of the array
 *
 */

void reverse_array(int *a, int n)
{
	int aux, i;

	n = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		aux = a[i];
		a[i] = a[n - i];
		a[n - i] = aux;
	}

}
