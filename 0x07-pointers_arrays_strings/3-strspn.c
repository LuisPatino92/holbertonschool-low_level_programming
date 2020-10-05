#include "holberton.h"

/**
 * _strspn - counts how many bytes are repeatd between 2 strings
 *
 * @s: The string to check
 * @accept: The string to check against
 *
 * Return: number of repeated bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int repeated = 0;
	int i, j;

	for (i = 0; *(s + i) && *(s + i) != 32; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				repeated++;
			}
		}
	}
	return (repeated);
}
