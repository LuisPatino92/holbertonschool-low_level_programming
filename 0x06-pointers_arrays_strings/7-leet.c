#include "holberton.h"

/**
 * leet - encrypt a message witha given rules
 *
 * @msg: The addres of message to be encrypted
 *
 * Return: The direction of the encrypted message
 */

char *leet(char *msg)
{
	int i, j;
	char coded[] = {52, 51, 48, 55, 49};
	char ToCode[] = {65, 69, 79, 84, 76};

	for (i = 0; i <= 4; i++)
	{
		for (j = 0; *(msg + j); j++)
		{
			if (*(msg + j) == *(ToCode + i) || *(msg + j) == *(ToCode + i) + 32)
				*(msg + j) = *(coded + i);
		}
	}

	return (msg);
}
