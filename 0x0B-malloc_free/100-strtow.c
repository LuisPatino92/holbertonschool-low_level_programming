#include "holberton.h"
#include <stdlib.h>

int length_s(char *str);
void write_word(char *str, char *word);

/**
 * strtow - Splits a string in separated words
 *
 * @str: The string to be separated
 *
 * Return: An array of pointers with each word
 */

char **strtow(char *str)
{
	char **words = NULL;
	int count = 0, i;

	if (str == NULL || *(str) == '\0')
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		if ((*(str + i + 1) != 0 && *(str + i) == 32 && *(str + i + 1) != 32) ||
		 (i == 0 && *(str + i) != 32))
			count++;
	}

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	count = 0;
	i = 0;
	if (*(str + i) != 32)
	{
		*(words + count) = malloc((length_s(str + i) + 1) * sizeof(char));
		if (*(words + count) == NULL)
			return (NULL);
		write_word(str + i, *(words + count));
		count++;
		i++;
	}
	for (; *(str + i); i++)
	{
		if (*(str + i + 1) != 0 && *(str + i) == 32 && *(str + i + 1) != 32)
		{
			*(words + count) = malloc((length_s(str + i + 1) + 1) * sizeof(char));
			if (*(words + count) == NULL)
				return (NULL);
			write_word(str + i + 1, *(words + count));
			count++;
		}
	}
	*(words + count) = NULL;
	return (words);
}

/**
 * write_word - Write a word in the desired direction
 *
 * @str: The string having the word
 * @word: The direction to write the word
 */

void write_word(char *str, char *word)
{
	int i;

	for (i = 0; *(str + i) != 32 && *(str + i); i++)
		*(word + i) = *(str + i);
	*(word + i) = 0;
}

/**
 * length_s - Computes the length of a word in a string
 *
 * @str: The string having the word beggining at firs char
 *
 * Return: The length of the string
 */

int length_s(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != 32 && *(str + i); i++)
		;
	return (i);
}
