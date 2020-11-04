#include "lists.h"

/**
 * reverse_listint - Reverses the order of a Linked List
 *
 * @head: The linked list to be reversed
 *
 * Return: The head of the new linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *current_plus;

	if (*head == NULL)
		return (*head);

	current = *head;
	current_plus = current->next;

	if (current_plus != NULL)
	{
		current->next = NULL;
		current = current_plus;
		current_plus = current->next;
		current->next = *head;
		*head = current;
	}
	else
	{
		return (*head);
	}

	while (current_plus != NULL)
	{
		current = current_plus;
		current_plus = current->next;
		current->next = *head;
		*head = current;
	}

	return (*head);
}
