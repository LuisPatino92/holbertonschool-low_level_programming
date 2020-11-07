#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the diagonals of a matrix
 *
 * @a: The matrix, casted as pointer
 * @size: The size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++, j++)
	{
		if (j % (size + 1) == 0)
			sum1 += *(a + i);
		if (i > 0 && j % (size - 1) == 0 && j + 2 < size * size)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
