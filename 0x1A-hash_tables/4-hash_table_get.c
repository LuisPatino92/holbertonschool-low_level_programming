#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value, for a given key.
 *
 * @ht: The hash table to look in
 * @key: The key whose value is desired
 *
 * Return: The value of the key. NUll if not match
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	head = *(ht->array + index);

	while (head)
	{
		if (!strcmp(head->key, key))
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
