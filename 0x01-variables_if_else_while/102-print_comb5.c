#include <stdio.h>

/**
 * main - Prints all combinations of two numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(48 + (i / 10));
			putchar(48 + (i % 10));
			putchar(32);
			putchar(48 + (j / 10));
			putchar(48 + (j % 10));

			if (!(i == 98 && j == 99))
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
