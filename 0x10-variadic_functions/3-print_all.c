#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int counter(const char * const guide);

/**
 * print_all - Prints everything
 *
 * @format: Format specifier
 */

void print_all(const char * const format, ...)
{
	int i = 0, count = 0, total = counter(format);
	char R = 'R';
	va_list ToPrint;

	va_start(ToPrint, format);

	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ToPrint, int));
				count++;
				break;
			case 'i':
				printf("%d", va_arg(ToPrint, int));
				count++;
				break;
			case 'f':
				printf("%g", va_arg(ToPrint, double));
				count++;
				break;
			case 's':
				printf("%s", va_arg(ToPrint, char*));
				count++;
				break;
			default:
				R = 'n';
				break;
		}
		if (count < total &&  R == 'R')
			printf(", ");
		if (count == total)
			printf("\n");
		R = 'R';
		i++;
	}
	va_end(ToPrint);
}

/**
 * counter - Counts how many format specifiers the format has
 *
 * @guide: The string with format specifiers
 *
 * Return: The counter of format specifiers
 */

int counter(const char * const guide)
{
	int count = 0, i = 0;

	while (*(guide + i))
	{
		switch (*(guide + i))
		{
			case 'c':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'f':
				count++;
				break;
			case 's':
				count++;
				break;
		}
		i++;
	}

	return (count);
}
