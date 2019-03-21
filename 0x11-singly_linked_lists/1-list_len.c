#include "lists.h"

/**
 * list_len - function that returns number of elements
 *
 *@h: first node of the array
 *
 * Return: number of elements of a linked list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	return (1 + list_len(h->next));

}
