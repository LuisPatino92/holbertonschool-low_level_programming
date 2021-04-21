#include "search_algos.h"

/**
 * jump_search - Searchs for a value using Jump Search algorithm
 *
 * @array: The array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The first index where value was found
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), left_i = 0, left_v, i;

	while (left_i < (int)size)
	{
		left_v = *(array + left_i);
		if (left_v >= (int)value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
											left_i - step, left_i);
			left_i -= step;
			for (i = 0; i <= step; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, *(array + left_i + i));
				if (value == *(array + left_i + i))
					return (left_i + i);
			}
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", left_i, left_v);
		}
		left_i += step;
	}
	printf("Value found between indexes [%d] and [%d]\n", left_i - step, left_i);
	left_i -= step;
	for (i = left_i; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (value == *(array + left_i + i))
			return (left_i + i);
	}
	return (-1);
}
