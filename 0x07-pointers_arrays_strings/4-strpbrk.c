#include "holberton.h"
#define NULL 0L

/**
 * _strpbrk - Looks for a char coincidence between 2 strings
 *
 * @s: The first string
 * @accept: The second string
 *
 * Return: The address of the coincidence, NULL if no coincidence.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (NULL);
}
