#include <stdio.h>

/**
 * main - Prints the one digit hexadecimal numbers
 *
 * Return: Always 0
 */

int main(void)
{

	char letter = 48;

	while (letter != 11)
	{
		putchar(letter);
		letter++;
		if (letter == 57)
			letter = 97;
		else if (letter == 103)
			letter = 10;
	}

	return (0);
}
