#include "lists.h"

/**
 * add_node - Add a New node to a Linked List
 *
 * @head: The direction where head points
 * @str: The string to have as new node str value
 *
 * Return: The address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

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
		new_node->next = *head;
		new_node->str = copy(str);
		new_node->len = length(str);
		*head = new_node;

	}

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
