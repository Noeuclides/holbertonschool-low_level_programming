#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a structure
 *
 * Return: 
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	
	for(nodes = 0; h != NULL; nodes++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return(nodes); 
}	
