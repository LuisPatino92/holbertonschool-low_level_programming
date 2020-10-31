#include "holberton.h"
#include <stdio.h>
/*#define NULL 0L*/

/**
 * _strstr - looks for a substring in a string
 *
 * @haystack: The string to llok in
 * @needle: The substring looked for
 *
 * Return: A pointer to start of coincidence, NULL if not coincidence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, found = 0;

	if (haystack == NULL || needle == NULL ||
		*haystack == '\0' || needle == '\0')
		return (NULL);

	for (i = 0; length(haystack + i) >= length(needle); i++)
	{
		found = compare(needle, haystack + i);
		if (found == 1)
			return (haystack + i);
	}

	return (NULL);
}

/**
 * compare - compares two strings one short and one large
 *
 * @shorty: The short string
 * @large: The large string
 *
 * Return: 0 if differents, 1 if match
 */
int compare(char *shorty, char *large)
{
	int i;

	for (i = 0; i < length(shorty); i++)
	{
		if (*(shorty + i) != *(large + i))
			return (0);
	}

	return (1);
}

/**
 * length - Measure the length of a string
 *
 * @str: The string whose length is needed
 *
 * Return: The length of the string
 */

int length(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;

	return (i);
}
