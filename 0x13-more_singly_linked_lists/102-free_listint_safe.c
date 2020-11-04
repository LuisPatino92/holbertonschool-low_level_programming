#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 *
 * @h: The linked list to be freed
 *
 * Return: The number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	listint_t *aux, *hash_map[20];

	aux = *h;

	while (aux != NULL)
	{
		hash_map[i] = aux;

		for (j = 0; j < i; j++)
		{
			if (aux == *(hash_map + j))
			{
				for (j = 0; j < i; j++)
					free(*(hash_map + j));
				*h = NULL;
				return (i);
			}
		}
		i++;
		aux = aux->next;
	}
	for (j = 0; j < i; j++)
		free(*(hash_map + j));
	*h = NULL;
	return (i);
}
