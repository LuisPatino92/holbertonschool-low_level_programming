#include <stdio.h>

/**
 * main - executes the Fizz-Buzz excersice
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			if (i == 100)
				printf("Fizz");
			else
				printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			if (i == 100)
				printf("FizzBuzz");
			else
				printf("FizzBuzz ");
		}
		else
		{
			if (i == 100)
				printf("%d", i);
			else
				printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
