#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * count_digits - Counts how many digits has the int input.
 * @number: integer whose gigits are going to be counted.
 *
 * Return: Always 0.
 */

int count_digits(int number)
{
	int i = 1, j = 0, divided = 10;

	while (divided >= 10)
	{
		divided = number / i;
		i = 10 * i;
		j++;
	}

	return (j);
}

/**
 * pot - This function returns the value of base ** exp.
 * @base: the base for the potentiation operation.
 * @exp: the exponent for the potentiaton operation.
 *
 * Return: result.
 */

int pot(int base, int exp)
{
	int i, result = 1;

	for (i = 1; i < exp; i++)
	{
		result = result * base;
	}

	return (result);
}

/**
  *main - Generate random num and prints last digit with a message.
  *
  * Return: Always 0.
  */

int main(void)
{
	int n, digits,  sign = 1, n_aux;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		n = -1 * n;
		sign = -1;
	}

	n_aux = n;

	digits = count_digits(n_aux);

	while (digits > 1)
	{
		n_aux = n_aux - pot(10, digits);
		digits = count_digits(n_aux);
	}

	n = sign * n;
	n_aux = sign * n_aux;

	printf("Last digit of %d is %d and is ", n, n_aux);

	if (n_aux > 5)
	{
		printf("greater than 5\n");
	} else if (n_aux == 0)
	{
		printf("0\n");
	} else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
