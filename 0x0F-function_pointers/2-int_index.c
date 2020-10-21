/**
 * int_index - Looks for a number to an array
 *
 * @array: The array of numbers to look in
 * @size: The size of the array
 * @cmp: The function to look
 *
 * Return: The index of the found number. -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, check;

	for (index = 0; index < size; index++)
	{
		check = cmp(array[index]);

		if (check != 0)
			return (index);

	}
	return (-1);
}
