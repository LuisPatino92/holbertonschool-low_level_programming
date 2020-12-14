#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a given index of a DLL
 *
 * @h: The head of the DLL
 * @idx: The index to insert the node in
 * @n: The number for the new_node if created
 *
 * Return: The adress of the new node or NULL at fail.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *walker = *h;
	unsigned int i = 0;

	while (walker && i++ != idx)
	{
		if (walker->next == NULL && i == idx)
			break;
		walker = walker->next;
	}
	if (walker)
	{
		new_node = create_node7();
		if (!new_node)
			return (NULL);
		if (idx > 0)
		{
			if (walker->next == NULL && i == idx)
			{
				new_node->prev = walker;
				new_node->next = NULL;
				walker->next = new_node;
			}
			else
			{
				walker->prev->next = new_node;
				new_node->prev = walker->prev;
				new_node->next = walker;
			}
		}
		else
		{
			new_node->prev = NULL;
			new_node->next = *h;
			if ((*h)->next != NULL)
				(*h)->prev = new_node;
			*h = new_node;
			if (new_node->next)
				new_node->next->prev = new_node;
		}
		new_node->n = n;
	}
	return (new_node);
}

/**
 * create_node7 - Creates a new node of a dlistint_t DLL
 *
 * Return: The address of the created node.
 */

dlistint_t *create_node7(void)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	return (node);
}
