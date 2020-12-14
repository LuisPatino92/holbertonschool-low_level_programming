#include "lists.h"

/**
 * sum_dlistint - sums all the elements of a DLL
 *
 * @head: The head of the DLL
 *
 * Return: The sum of all elements, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
