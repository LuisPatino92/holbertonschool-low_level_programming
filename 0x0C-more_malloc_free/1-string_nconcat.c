#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

unsigned int length(char *str);

/**
 * string_nconcat - Concatenates 2 strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to be copied from s2
 * Return: The string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *P;
	unsigned int s2_contribution, i, j;

	if (length(s2) + 1 > n)
		s2_contribution = n;
	else
		s2_contribution = length(s2) + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	P = (char *)malloc((length(s1) + s2_contribution) * sizeof(char));

	if (P == NULL)
	{
		free(P);
		return (NULL);
	}

	for (i = 0; i < length(s1); i++)
		*(P + i) = *(s1 + i);

	for (j = 0; j <= s2_contribution; j++)
		*(P + i + j - 1) = *(s2 + j);

	return (P);

}

/**
 * length - Computes the length of a string recursively
 *
 * @str: The string whose length you want to compute
 *
 * Return: The length of the string
 */

unsigned int length(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i); i++)
		;

	return (i);
}
