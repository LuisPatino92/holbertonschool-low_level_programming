#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash_table_t
 *
 * @size: The size of the array of the table
 *
 * Return: The pointer to the new table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	return (new_table);
}
