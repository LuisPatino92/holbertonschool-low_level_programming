#include "lists.h"

/**
 * find_listint_loop - Looks for a loop in a Linked list
 *
 * @head: The Linked List
 *
 * Return: The node where the loops start, NULL if no loop found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow->next == fast->next->next)
		{
			slow = slow->next;
			fast = head;
			while (1)
			{
				if (slow->next == fast->next)
					return (slow->next);
				slow = slow->next;
				fast = fast->next;
			}
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
