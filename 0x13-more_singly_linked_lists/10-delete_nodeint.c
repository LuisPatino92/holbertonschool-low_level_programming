#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the nodo passed as argument
 *
 * @head: The linked list whose noded is gonna be deleted
 * @index: The index of the node to delete
 *
 * Return: 1 if Success, -1 whether failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *aux = NULL;

	while (current != NULL)
	{
		if (index == 0)
		{
			if (head != NULL)
			{
				aux = *head;
				*head = (*head)->next;
				free(aux);
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		if (i + 1 == index)
		{
			aux = current->next;
			current->next = aux->next;
			free(aux);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
