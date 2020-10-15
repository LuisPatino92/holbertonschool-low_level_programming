#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Asigns more space for an array
 *
 * @ptr: Old array
 * @old_size: size del array
 * @new_size: size of the desired array
 *
 * Return: new address with enough space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *P;
	int limite, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		P = malloc(new_size * sizeof(char));
		free(ptr);
		return (P);
	}

	if (new_size == old_size)
		return (ptr);

	if (old_size >= new_size)
		limite = new_size;
	else
		limite = old_size;

	P = malloc(new_size * sizeof(char));

	for (i = 0; i < limite; i++)
	{
		*(P + i) = *(((char *)(ptr)) + i);
	}

	free(ptr);

	return (P);
}
