#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 *
 *@h: structure with list of elements
 *
 * Return: return the number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (1 + listint_len(h->next));
}
