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
	char *P = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	P = malloc(nmemb * size * sizeof(char));

	if (P == NULL)
	{
		free(P);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
		*(P + i) = 0;

	return (P);

}
