#include "holberton.h"

int _dirtyTrick(char *s, int i);
int _dirtyTrick2(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Check if a string is palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if it is a palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) <= 1)
		return (1);
	else
		return (_dirtyTrick2(s, 0, _strlen_recursion(s)));

}

/**
 * _dirtyTrick2 - Allows to use a counter and fixed length
 *
 * @s: The same string.
 * @i: A simple counter
 * @len: The length of S
 *
 * Return: 1 if s is palindrome 0 otherwise
 */

int _dirtyTrick2(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - i - 1))
		return (0);
	if (i == len / 2)
		return (1);
	else
		return (_dirtyTrick2(s, ++i, len));
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
