#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Creates and initializes a matrix
 *
 * @width: The width of the matrix
 * @height: The heigth of the matrix
 *
 * Return: the pointer to the matrix
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		*(matrix + i) = malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
