#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 *
 * @head: head element of the list.
 *
 * @index: number of node to return.
 *
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_index;
	unsigned int i;

	n_index = head;
	for (i = 0; i < index; i++)
	{
		if (n_index == NULL)
			return (NULL);
		n_index = n_index->next;
	}
	return (n_index);
}
