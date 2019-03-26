#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 *
 *@head: list of struct
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (*head == NULL)
		return (0);

	aux = *head;
	n = (*head)->n;
	*head = (*head)->next;
	aux->next = NULL;
	free(aux);

	return (n);
}
