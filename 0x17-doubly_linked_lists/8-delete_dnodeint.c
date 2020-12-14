#include "lists.h"

/**
 * delete_dnodeint_at_index - Inserts a new node in a given index of a DLL
 *
 * @head: The head of the DLL
 * @index: The index to delete the node
 *
 * Return: The adress of the new node or NULL at fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *walker = *head;
	unsigned int i = 0;

	while (walker && i++ != index)
		walker = walker->next;

	if (walker)
	{
		if (index > 0)
			walker->prev->next = walker->next;
		else
			*head = walker->next;

		if (walker->next)
			walker->next->prev = walker->prev;
		free(walker);
		return (1);
	}
	return (-1);
}
