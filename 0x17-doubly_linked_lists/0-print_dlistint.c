#include "lists.h"

/**
 * print_dlistint - Prints all the elements in a DLL
 *
 * @h: The head of the DLL
 *
 * Return: the number of nodes in the DLL
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
