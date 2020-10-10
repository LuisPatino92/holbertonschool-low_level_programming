#include <stdio.h>

/**
 * main - prints the name of the executable.
 *
 * @argc: counter of the arguments.
 * @argv: array with the inputs.
 *
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{
	printf("%s\n", *argv);
}
