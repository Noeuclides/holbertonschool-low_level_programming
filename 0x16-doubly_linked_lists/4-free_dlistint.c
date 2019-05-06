#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 *
 * @head: head element of the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head->next != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
