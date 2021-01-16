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

	if (ht == NULL)
		return(0);

	index = key_index((const unsigned char *)key, ht->size);
	if (!add_node(&(*(ht->array + index)), key, value))
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

int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp = NULL, *aux = NULL;
	int i = 0;

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	tmp = *head;
	aux = tmp;
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			if (i == 0)
				*head = (*head)->next;
			else
				aux->next = tmp->next;
		}
		aux = tmp;
		tmp = tmp->next;
		i++;
	}
	new_node->next = *head;
	*head = new_node;
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

	new_node->key = malloc(sizeof(char) * length((key)));
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = malloc(sizeof(char) * length((value)));
	if (new_node->key == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	copy_str(key, new_node->key);
	copy_str(value, new_node->value);

	new_node->next = NULL;

	return (new_node);
}

/**
 * length - Computes the length of a string
 *
 * @str: The string whose length is desired.
 *
 * Return: The length of the string
 */

int length(const char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}

/**
 * copy_str - Copies a string from one to another memory address.
 *
 * @original: The original string
 * @copy: the address where you want the copy
 */

void copy_str(const char *original, char *copy)
{
	int i = 0;

	while (*(original + i))
	{
		*(copy + i) = *(original + i);
		i++;
	}
	*(copy + i) = 0;
}
