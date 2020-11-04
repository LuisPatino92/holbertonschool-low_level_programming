#include "lists.h"

/**
 * add_nodeint - Add a node to a listint_t linked list at the beggining
 *
 * @head: A double pointer with the direction of head
 * @n: An int to fill the list
 *
 * Return: The created node, NULL when failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;

	*head = new_node;

	return (new_node);
}
