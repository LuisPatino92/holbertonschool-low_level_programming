#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Copy the values pointed in other address
 *
 * @dest: The destination address.
 * @src: The address with the info to be copied
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, lenght;

	while (src[i] != 0)
		i++;

	lenght = i;

	for (i = 0; i <= lenght; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
