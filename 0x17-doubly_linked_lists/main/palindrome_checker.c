#include "lists.h"

/**
 * main - Prints all the palindromes generated as product of three digit numbers
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i, j, k = 0, amount = 0, mayor = 0;
	for (i = 999; i > 100; i--)
	{
		for (j = 999; j > 100; j--)
		{
			if (check_palindrome(i * j))
			{
				if (k++ % 7 != 0)
					printf("%d * %d = %d\t", i, j, i * j);
				else
					printf("%d * %d = %d\n", i, j, i * j);
				amount++;
				if (i * j > mayor)
					mayor = i * j;
			}
		}
	}
	printf("\nHay %d Palindromos y el mayor es %d", amount / 2 , mayor);
	return (0);
}

int check_palindrome(int n)
{
	int digitos = 0, i, first, last;

	digitos = digits(n);

	for (i = 1; i <= digitos/2; i++)
	{
		first = (n / pot(10, (digitos - i))) % 10;
		last = (n % pot(10, i)) / pot(10, (i - 1));
		if (first != last)
			return (0);
	}

	return (1);
}

int pot(int base, int exp)
{
	int i = 0, resultado = 1;

	while (i++ < exp)
		resultado = base * resultado;

	return (resultado);
}

int digits(int n)
{
	int digits = 0, i = 1;

	while (n / i > 0)
	{
		i = i * 10;
		digits++;
	}
	return (digits);
}