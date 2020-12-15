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

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len2(*h))
		return (add_dnodeint_end(h, n));
	while (walker && i++ < idx)
		walker = walker->next;
	if (walker)
	{
		new_node = create_node7();
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->prev = walker->prev;
		new_node->next = walker;
		walker->prev->next = new_node;
		walker->prev = new_node;
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

/**
 * dlistint_len2 - Calculates the length of a DLL
 *
 * @h: The head of the DLL
 *
 * Return: The length of the DLL
 */

size_t dlistint_len2(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

