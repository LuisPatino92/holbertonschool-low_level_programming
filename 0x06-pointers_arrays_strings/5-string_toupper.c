#include "holberton.h"

/**
 * string_toupper - Capitalizes a string
 *
 * @toUP: String to be capitalized
 * Return: Capitelized string
 */

char *string_toupper(char *toUP)
{

	int i, j;

	for (i = 0; *(toUP + i); i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if (toUP[i] == j)
				toUP[i] = j - 32;
		}

	}

	return (toUP);
}
