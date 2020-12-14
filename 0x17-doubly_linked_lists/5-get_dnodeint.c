#include "lists.h"

/**
 * get_dnodeint_at_index - Returns a node from a DLL
 *
 * @head: The head of the DLL
 * @index: The desired index in the DLL
 *
 * Return: The address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *walker = head;
	unsigned int i = 0;

	while (walker && i++ != index)
		walker = walker->next;

	return (walker);
}
