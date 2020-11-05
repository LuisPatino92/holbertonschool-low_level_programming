#include "holberton.h"

int get_bit2(unsigned long int n, unsigned int index);

/**
 * flip_bits - Counts how much bits needed ti flip one number to other
 *
 * @n: First number
 * @m: Second Number
 *
 * Return: The amount of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	int i;

	for (i = 0; i <= 63; i++)
	{
		if (get_bit2(n, i) != get_bit2(m, i))
			counter++;
	}
	return (counter);
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
