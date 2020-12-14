#include "lists.h"

/**
 * dlistint_len - Calculates the length of a DLL
 *
 * @h: The head of the DLL
 *
 * Return: The length of the DLL
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
