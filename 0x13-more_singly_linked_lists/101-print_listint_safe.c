#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 *
 * @head: The linked list to be printed
 *
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, j;
	const listint_t *aux, *hash_map[20];

	aux = head;

	while (aux != NULL)
	{
		hash_map[i] = aux;

		for (j = 0; j < i; j++)
		{
			if (aux == *(hash_map + j))
			{
				printf("-> [%p] %d\n", (void *)aux, aux->n);
				return (i);
			}
		}
		printf("[%p] %d\n", (void *)aux, aux->n);
		i++;
		aux = aux->next;
	}
	return (i);
}
