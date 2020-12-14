#include "lists.h"

/**
 * add_dnodeint - Adds a node in the beggining of a DLL
 *
 * @head: The head of the DLL
 * @n: The number for the new_node
 *
 * Return: The address of the new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head = NULL)
		return (NULL);

	new_node = create_node2();
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}

/**
 * create_node2 - Creates a new node of a dlistint_t DLL
 *
 * Return: The address of the created node.
 */

dlistint_t *create_node2(void)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	return (node);
}
