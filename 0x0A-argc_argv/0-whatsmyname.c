#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the name of the executable.
 *
 * @argc: counter of the arguments.
 * @argv: array with the inputs.
 *
 * Return: Always 0 success
 */

int main(int __attribute__((__unused__)) argc , char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
