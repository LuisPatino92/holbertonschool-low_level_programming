#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Creates an initializaes a array
 *
 * @size: Large of the array
 * @c: The char to initialize the array
 *
 * Return: The address of the initialized pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *P;

	if (size == 0)
		return (NULL);

	P = malloc(sizeof(c) * size);

	if (P == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(P + i) = c;

	return (P);
}
