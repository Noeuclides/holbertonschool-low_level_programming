#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given pos
 *
 *@head: list of struct var
 *
 *@idx: index where has to be added the new node
 *
 *@n: value of the n struct in the node
 *
 * Return: node added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *aux, *firstnode;
	unsigned int i = 0;

	firstnode = *head;
	if (idx != 0)
	{
		while ((i + 1) < idx && *head != NULL)
		{
			*head = (*head)->next;
			i++;
		}
	}
	if (*head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		free (newnode);
		return (NULL);
	}

	newnode->n = n;
	aux = (*head)->next;
	(*head)->next = newnode;
	newnode->next = aux;
	*head = firstnode;

	return (newnode);
}
