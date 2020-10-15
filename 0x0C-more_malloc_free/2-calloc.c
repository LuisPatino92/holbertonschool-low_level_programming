#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - works as Calloc the original
 *
 * @nmemb: number of spaces to
 * @size: The size of every space
 *
 * Return: The address of the concatenated string
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *P;

	if (nmemb == 0 || size == 0)
		return (NULL);

	P = (void *)malloc(nmemb * size);

	if (P == NULL)
		free(P);

	memset(P, 0, size);

	return (P);

}
