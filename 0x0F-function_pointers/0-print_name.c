#include <stdio.h>

/**
 * print_name - Prints the name passed as argument in UPPERCASE or not
 *
 * @name: The name to be printed
 *
 * @f: The function to print with
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f == NULL)
	{
		f(name);
	}
}
