#include <stdlib.h>

/**
 * array_iterator - Execute a function through an array elements
 *
 * @array: an array of ints to execute the function through
 * @size: The size of the array
 * @action: The function to execute each array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
