#include "holberton.h"

/**
 * print_chessboard - Prints the pieces of a chess board passed as array
 *
 * @a: The bidimensional array having the position of pieces
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar(10);
		}
	}
}
