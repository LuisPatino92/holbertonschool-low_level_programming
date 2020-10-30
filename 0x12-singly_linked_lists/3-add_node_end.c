#include "lists.h"

/**
 * add_node_end - Add a New node to a Linked List at the end
 *
 * @head: The direction where head points
 * @str: The string to have as new node str value
 *
 * Return: The address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *h = NULL, *aux = NULL;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->str = copy(str);
		new_node->len = length(str);
		new_node->next = NULL;
	}
	else
	{
		h = malloc(sizeof(list_t));
		if (h == NULL)
			return (NULL);
		aux = h;
		h->next = *head;
		for (i = 0; h != NULL; i++)
		{
			if (h->next == NULL)
			{
				h->next = new_node;
				new_node->next = NULL;
				new_node->str = copy(str);
				new_node->len = length(str);
			}
			h = h->next;
		}

	}
	free(aux);
	return (new_node);
}

/**
 * copy - copies a string
 *
 * @str: The string to be copied
 *
 * Return: The copy of the string
 */

char *copy(const char *str)
{
	int i;
	char *copied;

	copied = malloc((length(str) + 1) * sizeof(char));
	if (copied == NULL)
		return (NULL);

	for (i = 0; i < length(str); i++)
		*(copied + i) = *(str + i);
	*(copied + i) = '\0';

	return (copied);

}

/**
 * length - Compute the length of a string
 *
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

int length(const char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}
