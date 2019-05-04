#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 *
 * @h: head node of the list.
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
