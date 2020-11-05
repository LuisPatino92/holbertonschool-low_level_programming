#include "holberton.h"

int get_bit2(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets a bit of a number to 1
 *
 * @n: The number whose bit is gonna be set in 0
 * @index: The index to check
 *
 * Return: 1 if worked, -1 if an error ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > 63)
		return (-1);

	if (get_bit2(*n, index) == 1)
		*n ^= (aux << index);

	return (1);
}


/**
 * get_bit2 - Checks for a bit in a given index
 *
 * @n: The number whose bit is gonna be checked
 * @index: The index to check
 *
 * Return: The bit if found, -1 if an error ocurred
 */

int get_bit2(unsigned long int n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > 63)
		return (-1);

	if (((aux << index) & n) == (aux << index))
		return (1);
	else
		return (0);
}
