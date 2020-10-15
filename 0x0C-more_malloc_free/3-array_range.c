#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Makes an integer array filled from min to max
 *
 * @min: First value of the array
 * @max: Last value of array
 *
 * Return: The direction of the array
 */

int *array_range(int min, int max)
{
	int *P, i, j = 0;

	if (min > max)
		return (NULL);

	P = malloc((max - min + 1) * sizeof(int));

	if (P == NULL)
	{
		free(P);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		*(P + j) = i;
		j++;
	}

	return (P);
}
