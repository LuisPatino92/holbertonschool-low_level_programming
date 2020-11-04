#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node in a desired index
 *
 * @head: The linked list to be printed
 * @idx: The index to add the new node
 * @n: The int to add to the new node
 *
 * Return: The address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = *head, *new_node = NULL;

	for (i = 0; current != NULL; i++)
	{
		if (i + 1 == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}
	return (NULL);
}
