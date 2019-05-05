#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list.
 *
 * @head: head element of a list
 *
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int i, sum = 0;

	if (head == NULL)
		return (0);
	node = head;
	for (i = 0; node != NULL; i++)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);

}
