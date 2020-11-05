#include "holberton.h"

/**
 * set_bit - Sets a bit of a number to 1
 *
 * @n: The number whose bit is gonna be set in 1
 * @index: The index to check
 *
 * Return: 1 if worked, -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > 63)
		return (-1);

	*n |= (aux << index);

	return (1);
}
