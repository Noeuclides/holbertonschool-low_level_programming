#include "lists.h"

/**
 * create_node1 - function that creates a node of a structure type
 *
 * @new: new node to create
 *
 * @n: integer data of the structure
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *create_node1(dlistint_t *new, const int n)
{
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 *
 * @head: head node of the list
 *
 * @n: integer data of the structure
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail = NULL;

	new = create_node1(new, n);
	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	tail = new;
	(*head)->prev = new;
	while (tail->next != NULL)
		tail = tail->next;
	*head = new;
	return (*head);
}
