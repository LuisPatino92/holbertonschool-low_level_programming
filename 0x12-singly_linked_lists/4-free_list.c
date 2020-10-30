#include "lists.h"

/**
 * free_list - frees all the memory allocated in the add node
 *
 * @head: The start of the linked list
 */

void free_list(list_t *head)
{
	int i;
	list_t *h, *aux = NULL;

	h = head;

	for (i = 0; h != NULL; i++)
	{
		free(aux);
		free(h->str);
		aux = h;
		h = h->next;
	}


}
