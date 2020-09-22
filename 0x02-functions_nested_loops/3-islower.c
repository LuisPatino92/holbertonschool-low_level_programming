#include "holberton.h"

/*
 * _islower - Checks if the input is lowercase
 *
 * @c: int - is the char to be checked in ASCII code
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
