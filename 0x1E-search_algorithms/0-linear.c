#include "search_algos.h"

/**
 * linear_search - Seraches for a value in an Array
 *
 * @array: The array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the first found coincidence or -1 if not coincidence
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		if (value == *(array + i))
			return (i);
	}

	return (-1);
}
