#include "holberton.h"

int checkstring(char *s1, char *s2, int length, int i);
int _strlen_recursion(char *s);
int _dirtyTrick(char *s, int i);

/**
 * wildcmp - Checks if strings are the same with wildcard *
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (_strlen_recursion(s1) != _strlen_recursion(s2))
		return (0);
	else
		return (checkstring(s1, s2, _strlen_recursion(s1), 0));
}

/**
 * checkstring - Allows to use counter and fix length
 *
 * @s1: First string
 * @s2: Second string
 * @length: Length of string
 * @i: Counter
 *
 * Return: 1 if can be considered identical, 0 otherwise
 */

int checkstring(char *s1, char *s2, int length, int i)
{
	if (*(s1 + i) != *(s2 + i) && *(s2 + i) != 42)
		return (0);

	if (i == length)
		return (1);
	else
		return (checkstring(s1, s2, length, ++i));

}

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
