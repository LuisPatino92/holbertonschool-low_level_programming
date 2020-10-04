#include "holberton.h"

/**
 * _isdigit - checks if the entry is a digit
 *
 * @c: is the int to be checked
 * Return: 1 if is a digit - 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
