#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the alphabet inversily.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);

}
