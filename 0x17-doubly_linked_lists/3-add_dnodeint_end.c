#include "lists.h"

/**
 * add_dnodeint_end - Adds a new_node at the end of a DLL
 *
 * @head: The head of the new_node
 * @n: The integer for the new_node->n value
 *
 * Return: The address of the new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = create_node3(), *walker = *head;

	if (new_node == NULL)
		return (NULL);

	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		while (walker->next)
			walker = walker->next;
		new_node->next = walker->next;
		new_node->prev = walker;
		walker->next = new_node;
	}

	new_node->n = n;

	return (new_node);
}


/**
 * create_node3 - Creates a new node of a dlistint_t DLL
 *
 * Return: The address of the created node.
 */

dlistint_t *create_node3(void)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	return (node);
}
