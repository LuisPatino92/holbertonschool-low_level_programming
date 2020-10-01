#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: The addres of the first string
 * @src: The address of the second char
 *
 * Return: The address of the concatenated char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, n;

	while (*(dest + i) != 0)
	{
		printf("\nadentro del primer ciclo %d\n", i);
		i++;
	}
	n = i - 1;

	i = 0;

	while (*(src + i) != 0)
	{
		printf("\nadentro del segundo ciclo %d\n", i);

		*(dest + (n + i)) = *(src + i);
		i++;
	}

	return (dest);
}
