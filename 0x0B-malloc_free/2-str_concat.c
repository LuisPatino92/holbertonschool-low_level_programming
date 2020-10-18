#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
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
	char *P;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	P = malloc((length(s1) + length(s2) + 1) * sizeof(char));
	if (P == NULL)
		return (NULL);

	for (i = 0; i < length(s1); i++)
		*(P + i) = *(s1 + i);

	for (j = 0; j < length(s2); j++)
		*(P + i + j) = *(s2 + j);

	*(P + i + j) = '\0';

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
	int i;

	for (i = 0; *(str + i); i++)
		;

	return (i);
}
