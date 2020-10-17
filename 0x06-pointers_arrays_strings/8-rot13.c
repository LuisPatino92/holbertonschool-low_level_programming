#include "holberton.h"

/**
 * leet - encrypt a message witha given rules
 *
 * @msg: The addres of message to be encrypted
 *
 * Return: The direction of the encrypted message
 */

char *rot13(char *msg)
{
	int i, j;
	char ToCode[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, \
108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, \
65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, \
84, 85, 86, 87, 88, 89, 90};

	char coded[] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, \
121, 122, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 78, \
79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 65, 66, 67, 68, 69, 70, 71, \
72, 73, 74, 75, 76, 77};

	for (i = 0; i <= 51; i++)
	{
		for (j = 0; *(msg + j); j++)
		{
			if (*(msg + j) == *(ToCode + i))
				*(msg + j) = *(coded + i);
		}
	}

	return (msg);
}
