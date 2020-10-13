#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Concatenates 2 strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: The string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *P, *S1, *S2;

	if (s1 == NULL && s2 == NULL)
	{
		P = malloc(sizeof(char));
		*P = '\0';
		return (P);
	}

	if (s1 == NULL)
	{
		S1 = malloc(sizeof(char));
		*S1 = '\0';
	}
	else
	{
		S1 = copy(s1);
	}

	if (s2 == NULL)
	{
		S2 = malloc(sizeof(char));
		*S2 = '\0';
	}
	else
	{
		S2 = copy(s2);
	}

	if (malloc(length(S1)) == NULL || malloc(length(S2)) == NULL)
		return (NULL);

	P = malloc((length(S1) * sizeof(char)) + (length(S2) * sizeof(char)));

	for (i = 0; i <= length(S1); i++)
		*(P + i) = *(S1 + i);

	for (j = 0; j <= length(S2); j++)
		*(P + i + j - 1) = *(S2 + j);

	free(S1);
	free(S2);

	return (P);
}


/**
 * length - Computes the length of a string recursively
 *
 * @str: The string whose length you want to compute
 *
 * Return: The length of the string
 */

int length(char *str)
{
	if (*(str) == '\0')
		return (0);
	else
		return (1 + length(str + 1));

}

/**
 * copy - copies a string to other modificable
 *
 * @string: The string to be copied
 *
 * Return: The pointer to copy
 */

char *copy(char *string)
{
	char *P;
	int i;

	P = malloc(length(string) * sizeof(char));

	for (i = 0; i <= length(string); i++)
		*(P + i) = *(string + i);

	return (P);

}
