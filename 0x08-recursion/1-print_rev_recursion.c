#include "holberton.h"

void printrev(char *s, int i, int length);
int _strlen_recursion(char *s);
int _dirtyTrick(char *s, int i);

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 *
 * @s: The String to be printed.
 */

void _print_rev_recursion(char *s)
{
	printrev(s, 0, _strlen_recursion(s));
}

/**
 * printrev - Allows counter and fixed length
 *
 * @s: The string
 * @i: A counter
 * @length: Original length of the string
 *
 */

void printrev(char *s, int i, int length)
{
	if (*(s + i) != '\0')
	{
		_putchar(*(s + length - i));
		(printrev(s, ++i, length));
	}
	else
	{
		_putchar(*(s + length - i));
	}
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
