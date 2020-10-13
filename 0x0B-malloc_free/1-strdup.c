#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - Copies a string in other memory direction
 *
 * @str: The string to be copied
 *
 * Return: The direction of copied string. NULL otherwise
 */

char *_strdup(char *str)
{
	char *P;
	int i;

	if (str == NULL)
		return (NULL);

	P = malloc((length(str)) * sizeof(char));

	if (P == NULL)
		return (NULL);

	for (i = 0; i < length(str); i++)
		*(P + i) = *(str + i);

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
		return (1);
	else
		return (1 + length(str + 1));

}
