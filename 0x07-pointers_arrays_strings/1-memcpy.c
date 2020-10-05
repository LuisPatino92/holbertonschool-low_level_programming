#include "holberton.h"

/**
 * _memcpy - changes some bytes of dest with src content
 *
 * @dest: The direction to be changed
 * @src: The origin to copy
 * @n: How many bytes overwrite
 *
 * Return: The pointer to the changed string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		*(dest + i) = *(src + i);

	}

	return (dest);
}
