#include "lists.h"

/**
 * print_listint - function that prints integers in a list
 *
 *h: list of elements in a structure
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	if (!h)
		return (0);

	printf("%d\n", h->n);

	return (1 + print_listint(h->next));
}
