#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers
 *
 * @separator: The separator of the numbers
 * @n: Number of numbers to be summed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (n == 0)
		return;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");
	}

	va_end(nums);

}
