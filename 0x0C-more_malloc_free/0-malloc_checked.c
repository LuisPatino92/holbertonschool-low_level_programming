#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates an amount of bytes in memory
 *
 * @b: The amount of bytes you need to allocate
 *
 * Return: The address of allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *P;

	P = malloc(b);

	if (P == NULL)
	{
		free(P);
		exit(98);
	}

	return (P);

}
