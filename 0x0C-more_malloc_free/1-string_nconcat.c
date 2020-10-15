#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

unsigned int length(char *str);

/**
 * str_concat - Concatenates 2 strings
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

	if (length(s2) >= n)
		s2_contribution = n - 1;
	else
		s2_contribution = length(s2) - 1;

	if (s1 == NULL && s2 == NULL)
	{
		P = malloc(1);
		*(P) = '\0';
		return (P);
	}
	else if (s1 == NULL)
	{
		P = (char *)malloc(s2_contribution + 1);
		if (P == NULL)
		{
			free(P);
			return (NULL);
		}

		for (i = 0; i <= s2_contribution; i++)
			*(P + i) = *(s2 + i);
		return (P);
	}
	else if (s2 == NULL)
	{
		P = (char *)malloc(length(s1) + 1);
		if (P == NULL)
		{
			free(P);
			return (NULL);
		}
		for (i = 0; i <= length(s1); i++)
			*(P + i) = *(s2 + i);
		return (P);
	}
	else
	{
		P = (char *)malloc(length(s1) + s2_contribution + 1);
		if (P == NULL)
		{
			free(P);
			return (NULL);
		}
		for (i = 0; i <= length(s1); i++)
			*(P + i) = *(s1 + i);
		for (j = 0; j < s2_contribution; j++)
			*(P + i + j - 1) = *(s2 + j);
		return (P);
	}

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
