#include "lists.h"

/**
 * pop_listint - Frees the first node of a Linked List
 *
 * @head: The linked list to operate
 *
 * Return: The number of the deleted node.
 */

int pop_listint(listint_t **head)
{
	int aux;
	listint_t *P;

	P = *head;
	aux = P->n;
	*head = P->next;
	free(P);

	return (aux);
}
