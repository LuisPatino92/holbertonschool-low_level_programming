#include <stdlib.h>

/**
 * free_grid - Frees memory used to store a matrix
 *
 * @grid: The matrix to be freed
 * @height: The number of rows
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
