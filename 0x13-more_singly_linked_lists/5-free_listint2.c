#include "lists.h"

/**
 * free_listint2 - Frees the memory allocated in the linked list creation
 *
 * @head: The head of the linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	aux = *head;

	while (aux != NULL)
	{
		*head = aux->next;
		if (aux != NULL)
			free(aux);
		aux = *head;
	}
}
