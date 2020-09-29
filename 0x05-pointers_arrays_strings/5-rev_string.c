#include "holberton.h"

/**
 * rev_string - reverse a String in its address memory
 *
 * @s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	int i, lenght;
	char auxString[1000];

	i = 0;

	while (s[i] != 0)
	{
		auxString[i] = s[i];
		i++;
	}

	lenght = i - 1;

	for (i = 0; i <= lenght; i++)
		*(s + i) = auxString[lenght - i];

}
