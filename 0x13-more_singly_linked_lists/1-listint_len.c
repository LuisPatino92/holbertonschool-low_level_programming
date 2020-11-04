#include "lists.h"

/**
 * listint_len - Counts the elements of a linked list
 *
 * @h: The linked list to be printed
 *
 * Return: The number of elements printed
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
