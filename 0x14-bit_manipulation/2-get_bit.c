#include "holberton.h"

/**
 * get_bit - Checks for a bit in a given index
 *
 * @n: The number whose bit is gonna be checked
 * @index: The index to check
 *
 * Return: The bit if found, -1 if an error ocurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > 63)
		return (-1);

	if (((aux << index) & n) == (aux << index))
		return (1);
	else
		return (0);
}
