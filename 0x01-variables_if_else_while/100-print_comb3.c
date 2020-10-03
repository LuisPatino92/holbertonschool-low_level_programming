#include <stdio.h>

/**
 * main - Prints all combinations of two numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (!(i == 8 && j == 9))
			{
				putchar(44);
				putchar(32);
			}
			else
			{
				putchar(10);
			}

		}

	}


	return (0);
}
