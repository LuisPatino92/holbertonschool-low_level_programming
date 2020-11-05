#include "holberton.h"

int length(const char *str);
/**
 * binary_to_uint - returns and unsigned int from a char binary array
 *
 * @b: The char with 1 and 0's to ve converted
 *
 * Return: The unsigned int number in decimal base
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int aux = 0;
	int i, j;

	for (i = 0, j = length(b) - 1; i < length(b); i++, j--)
	{
		if (*(b + j) < 48 || *(b + j) > 49)
			return (0);
		aux = aux | ((*(b + j) - 48) << i);
	}

	return (aux);
}

/**
 * length - Measure the length of a string
 *
 * @str: The string whose length is needed
 *
 * Return: The length of the string (number of elements)
 */

int length(const char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;

	return (i);
}
