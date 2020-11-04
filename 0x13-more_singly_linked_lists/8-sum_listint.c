#include "lists.h"

/**
 * sum_listint - computes and returns the sum of linked lists
 *
 * @head: The Linked List
 *
 * Return: The sum of the elements, 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux = head;

	if (head == NULL)
		return (sum);

	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
