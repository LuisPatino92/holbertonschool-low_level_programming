#include "holberton.h"

int _dirtyTrick(char *s, int i);

/**
 * _strlen_recursion - compute the length of a string
 *
 * @s: - The string to be measured
 *
 * Return: The length of s
 */

int _strlen_recursion(char *s)
{
	return (_dirtyTrick(s, 0));

}

/**
 * _dirtyTrick - Allows a counter
 *
 * @s: Exactly the same string
 * @i: An acumulator
 *
 * Return: i, the value of length
 */

int _dirtyTrick(char *s, int i)
{
	if (*(s + i) == '\0')
		return (i);

	else
	{
		i++;
		return (_dirtyTrick(s, i));
	}
}
