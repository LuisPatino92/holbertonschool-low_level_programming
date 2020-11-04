#include "lists.h"

/**
 * add_nodeint_end - Add a node to a listint_t linked list at the end
 *
 * @head: A double pointer with the direction of head
 * @n: An int to fill the list
 *
 * Return: The created node, NULL when failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *new_node;

	aux = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	do {
		if (aux == NULL)
		{
			*head = new_node;
			new_node->n = n;
			new_node->next = NULL;
			break;
		}

		if (aux->next == NULL)
		{
			aux->next = new_node;
			new_node->next = NULL;
			new_node->n = n;
			break;
		}
		aux = aux->next;
	} while (aux != NULL);

	return (new_node);
}
