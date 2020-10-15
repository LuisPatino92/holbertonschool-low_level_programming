#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - works as Calloc the original
 *
 * @nmemb: number of spaces to
 * @size: The size of every space
 *
 * Return: The address of the concatenated string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *P = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	P = malloc(nmemb * size * sizeof(char));

	if (P == NULL)
		return (P);

	for (i = 0; i < nmemb * size; i++)
		*(char *)P = 0;

	return ((char *)P);

}
