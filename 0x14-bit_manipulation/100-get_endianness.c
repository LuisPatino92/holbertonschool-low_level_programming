#include "holberton.h"

/**
 * get_endianness - Checks the endianness of the machine
 *
 * Return: 0 if big endian 1 if little indian
 */

int get_endianness(void)
{
	int checker = 1;

	if ((checker << 1) == 0)
		return (0);
	else
		return (1);
}
