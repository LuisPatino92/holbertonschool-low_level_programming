#include "lists.h"

/**
 * list_len - Count how many elements does a linked list have
 *
 * @h: The list to be counted
 *
 * Return: The number of nodes printed
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
