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
		i++;
	}

	n = i;

	i = 0;

	while (*(src + i) != 0)
	{
		*(dest + (n + i)) = *(src + i);
		i++;
	}

	return (dest);
}
