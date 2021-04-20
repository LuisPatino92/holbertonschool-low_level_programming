#include "search_algos.h"

/**
 * binary_search - Seraches for a value in an Array
 *
 * @array: The array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the first found coincidence or -1 if not coincidence
 */

int binary_search(int *array, size_t size, int value)
{
	int aux;
	size_t new_size;

	if (!array || size == 0)
		return (-1);

	print_array(array, (int)size);
	if (size % 2 == 0)
		new_size = (size / 2) - 1;
	else
		new_size = ((size) / 2);
	if (value == *(array + new_size))
	{
		return (new_size);
	}
	else if (value < *(array + ((size - 1) / 2)))
	{
		if (size % 2 == 0)
			new_size = (size / 2) - 1;
		else
			new_size = (size / 2); /*OJO*/
		aux = binary_search(array, new_size, value);
		if (aux == -1)
			return (-1);
		return (aux);
	}
	else
	{
		if (size % 2 == 0)
			new_size = (size / 2);
		else
			new_size = (size / 2) + 1;
		aux = binary_search(array + new_size, size / 2, value);
		if (aux == -1)
			return (-1);
		return (aux + new_size);
	}
}


/**
 * print_array - Prints the array looking in
 *
 * @array: The array in which the program is looking in
 * @size: The size of the array
 */

void print_array(int *array, int size)
{
	int i = 0;

	printf("Searching in array:");
	while (i < size - 1)
		printf(" %d,", *(array + i++));

	printf(" %d", *(array + i++));
	printf("\n");
}
