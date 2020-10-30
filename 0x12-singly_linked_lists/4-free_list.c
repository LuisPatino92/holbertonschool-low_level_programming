#include "lists.h"

/**
 * free_list - frees all the memory allocated in the add node
 *
 * @head: The start of the linked list
 */

void free_list(list_t *head)
{

	for (; head != NULL;)
	{
		free(head->str);
		free(head);

		head = head->next;

	}
}
