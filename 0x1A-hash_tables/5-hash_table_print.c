#include "hash_tables.h"

/**
 * hash_table_print - Prints a whole hash table.
 * * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	int i = 0, j = 0;
	hash_node_t *head = NULL;

	if (ht == NULL)
		return;
	printf("{");
	head = *(ht->array + i);
	while (i < (int)ht->size)
	{
		while (head)
		{
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			j++;
		}
		i++;
		head = *(ht->array + i);
	}
	printf("}\n");
}
