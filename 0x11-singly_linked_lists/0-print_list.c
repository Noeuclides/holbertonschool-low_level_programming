#include "lists.h"

/**
 * print_list - print elements of list_t
 *
 *@h: variable type list_h to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	char *p;

	p = NULL;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", p);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
