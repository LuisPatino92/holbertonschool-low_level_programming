#include "hash_tables.h"

/**
 * hash_table_set - Sets a new node in a HAsh Table
 *
 * @ht: The address on memory of the table
 * @key: The key value of the entry
 * @value: The value of the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (!add_node(*(ht->array + index), key, value))
		return (0);
	return (1);
}

/**
 * add_node - Adds a node in the right index
 *
 * @head: The head of the index
 * @key: The key to be inserted
 * @value: The value of the key
 *
 * Return: 1 on succes, 0 otherwise
 */

int add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = head;
	head = new_node;
	return (1);
}

/**
 * create_node - Allocates memory for a node
 *
 * @key: The key to be inserted
 * @value: The value of the key
 *
 * Return: The node created, NULL on fail
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	return (new_node);
}
