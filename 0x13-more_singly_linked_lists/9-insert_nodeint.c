#include "lists.h"

unsigned int listint_len2(const listint_t *h);

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

	if (idx >= listint_len2(*head))
		return (NULL);

	for (i = 0; i < listint_len2(*head); i++, current = current->next)
	{
		if (idx == 0)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
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
	}
	return (NULL);
}

#include "lists.h"

/**
 * listint_len2 - Counts the elements of a linked list
 *
 * @h: The linked list to be printed
 *
 * Return: The number of elements printed
 */

unsigned int listint_len2(const listint_t *h)
{
	unsigned int i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
