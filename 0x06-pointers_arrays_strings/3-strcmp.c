#include "holberton.h"

/**
 * _strcmp - compares digit by digit of two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: The ASCII substract of the different firs digit found
 */

int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	for (i = 0; s1[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
	}

	return (n);
}
