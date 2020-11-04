#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list
 *
 * @h: The linked list to be printed
 *
 * Return: The number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
