#include "holberton.h"

/**
 * rot13 - encrypt a message with rot13 rules
 *
 * @msg: The addres of message to be encrypted
 *
 * Return: The direction of the encrypted message
 */

char *rot13(char *msg)
{
	int i, j, change[] = {13, 13, -13, -13};
	char liminf[] = {97, 65, 110, 78};
	char limsup[] = {109, 77, 122, 90};

	for (i = 0; *(msg + i) != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if ((msg[i] >= liminf[j]) && (msg[i] <= limsup[j]))
			{
				msg[i] = msg[i] + change[j];
				break;

			}
		}
	}

	return (msg);
}
