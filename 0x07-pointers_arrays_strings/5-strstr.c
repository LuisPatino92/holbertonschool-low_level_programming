#include "holberton.h"
#include <stdio.h>
/*#define NULL 0L*/

/**
 * _strstr - looks for a substring in a string
 *
 * @haystack: The string to llok in
 * @needle: The substring looked for
 *
 * Return: A pointer to start of coincidence, NULL if not coincidence
 */

char *_strstr(char *haystack, char *needle)
{
	int lengthH, lengthN, i, aux = 0, index[300];

	for (lengthH = 0; *(haystack + lengthH); lengthH++)
		;
	for (lengthN = 0; *(needle + lengthN); lengthN++)
		;
	printf("De los lentgs salimos melos \n\n");

	puts(haystack);
	puts(needle);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		putchar(haystack[i]);

		/*	if (*(haystack + i) == *(needle + 1))
		{

	       
			index[aux] = i;
			aux++;
			}*/
	}
	printf("del segundo salimos");


	for (i = 0; index[i]; i++)
	{
		printf("the index are %d y %d", index[0], index[1]);
	}
	return (0);
}
