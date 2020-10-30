#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 *
 * @h: The list to be printed
 *
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		h = h->next;
	}

	return (i);
}
