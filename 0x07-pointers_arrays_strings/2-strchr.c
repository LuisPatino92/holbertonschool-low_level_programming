#include "holberton.h"

/**
 * _strchr - Look for a byte through a string and returns a pointer to
 *
 * @s: Direction of the string
 * @c: The char to look for
 *
 * Return: A pointer to the first poin coincidence, null if no coincidence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (0);
}
