#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end
 *
 *@head: pointer to a pointer with the address of the struct var
 *
 *@n: integer in the list
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	lastnode = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
	return (*head);
}
