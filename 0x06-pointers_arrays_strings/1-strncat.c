#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - Concatenates one string with n bytes of other
 *
 * @dest: The addres of the first string
 * @src: The address of the second char
 * @n: number of bytes of second string to be concatenated
 *
 * Return: The address of the concatenated char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, lenghtC1, lenghtC2;

	for (lenghtC1 = 0; *(dest + lenghtC1); lenghtC1++)
		;

	for (lenghtC2 = 0; *(src + lenghtC2); lenghtC2++)
		;

	if (n > lenghtC2)
	{
		for (i = 0; i < lenghtC2; i++)
		{
			*(dest + (lenghtC1 + i)) = *(src + i);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*(dest + (lenghtC1 + i)) = *(src + i);
		}
	}

	return (dest);
}
