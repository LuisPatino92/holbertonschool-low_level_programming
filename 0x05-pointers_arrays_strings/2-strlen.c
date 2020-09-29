#include "holberton.h"

/**
 * _strlen - Returns the lenght os a string
 *
 * @s: The input string
 *
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	return (i);
}
