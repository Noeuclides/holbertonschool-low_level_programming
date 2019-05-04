#include "lists.h"

/**
 * create_node - function that creates a node of a structure type
 *
 * @new: node to create.
 *
 * @n: integer element of the structure.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *create_node(dlistint_t *new, const int n)
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
 * add_dnodeint_end - function that adds a new node at the end of a list.
 *
 * @head: head of the list.
 *
 * @n: integer element of the structure.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail;

	new = create_node(new, n);
	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	new->prev = tail;
	tail->next = new;
	return (*head);
}
