#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all number fron numbered entered to 98
 *
 * @n: The initial number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", i);

		printf("\n");
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);

		printf("\n");

	}
	else
	{
		printf("%d\n", n);
	}
}
