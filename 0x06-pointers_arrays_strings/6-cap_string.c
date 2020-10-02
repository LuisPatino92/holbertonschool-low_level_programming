#include "holberton.h"

/**
 * cap_string - Capitalizes a string
 *
 * @toUP: String to be capitalized
 * Return: Capitelized string
 */

char *cap_string(char *toUP)
{

	int i, j;


	for (i = 0; *(toUP + i); i++)
	{
		if (*(toUP + i) == 32)
		{
			for (j = 97; j <= 122; j++)
			{
				if (toUP[i + 1] == j)
					toUP[i + 1] = j - 32;
			}
		}

		if (i == 0)
		{
			for (j = 97; j <= 122; j++)
			{
				if (toUP[i] == j)
					toUP[i] = j - 32;
			}

		}

	}

	return (toUP);
}
