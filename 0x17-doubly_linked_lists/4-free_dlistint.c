#include "lists.h"

/**
 * free_dlistint - frees a DLL
 *
 * @head: The head of the DLL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *walker = head;

	while (walker)
	{
		walker = head->next;
		free(head);
		head = walker;
	}

}
