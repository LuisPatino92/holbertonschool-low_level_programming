#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings
 *
 * @separator: The separator of the strings
 * @n: Number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *aux;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		aux = va_arg(strings, char *);

		if (aux != NULL)
			printf("%s", aux);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");
	}

	va_end(strings);

}
