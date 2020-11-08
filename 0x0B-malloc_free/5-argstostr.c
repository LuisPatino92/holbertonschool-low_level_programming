#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates args in one string sparated by \n
 *
 * @ac: Number of arguments
 * @av: double pointer with all the arguments
 *
 * Return: The pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k = 0, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sum += length(*(av + i));
	concatenated = malloc((sum + ac + 1) * (sizeof(char)));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, k++)
			*(concatenated + k) = *(*(av + i) + j);
		*(concatenated + k) = '\n';
		k++;
	}
	*(concatenated + k) = '\0';
	return (concatenated);
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
	int i = 0;

	for (; *(str + i); i++)
		;
	return (i);
}
