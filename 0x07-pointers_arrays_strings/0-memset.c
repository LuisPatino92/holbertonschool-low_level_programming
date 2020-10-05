#include "holberton.h"

/**
 * _memset - changes some bytes of the dest wit a char
 *
 * @s: The direction to be changed
 * @b: The char to replace with
 * @n: How many bytes overwrite
 *
 * Return: The pointer to the changed string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		*(s + i) = b;

	}

	return (s);
}
