#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *head = NULL;
	unsigned long int i = 0;

	head = *(ht->array + i);

	while (i < ht->size)
	{
		while (head)
		{
			tmp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = NULL;
			head = tmp;
		}
		i++;
		if (i < ht->size)
			head = *(ht->array + i);
	}
	free(ht->array);
	free(ht);
}
