#include "holberton.h"

void rot_13(char *letter);

/**
 * rot13 - encrypt a message with rot13 rules
 *
 * @msg: The addres of message to be encrypted
 *
 * Return: The direction of the encrypted message
 */

char *rot13(char *msg)
{
	int i;

	for (i = 0; *(msg + i) != '\0'; i++)
		rot_13(msg + i);

	return (msg);
}

/**
 * rot_13 - Encrypts a letter to ROT13
 *
 * @letter: The letter to be encrypted
 */

void rot_13(char *letter)
{
	if ((*(letter) >= 97 && *(letter) <= 109) ||
	    (*(letter) >= 65 && *(letter) <= 77))
		*(letter) = *(letter) + 13;
	else if ((*(letter) >= 110 && *(letter) <= 122) ||
		 (*(letter) >= 78 && *(letter) <= 90))
		*(letter) = *(letter) - 13;
}
