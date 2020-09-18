#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the natural numbers from 00 to 99.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num, num_2;

	for (num = 0; num <= 9; num++)
	{
		for (num_2 = 0; num_2 <= 9; num_2++)
		{
			putchar(num + '0');
			putchar(num_2 + '0');

			if (num !=9 || num_2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
