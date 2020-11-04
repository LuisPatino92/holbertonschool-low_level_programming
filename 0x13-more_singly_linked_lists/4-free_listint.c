#include "lists.h"

/**
 * free_listint - Frees the memory allocated in the linked list creation
 *
 * @head: The head of the linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;

	while (aux != NULL)
	{
		head = head->next;
		free(aux);
		aux = head;
	}

}
