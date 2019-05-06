#include "lists.h"

/**
 * del_last - function that deletes the last node at index of a list
 *
 * @del: del element of the list.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int del_last(dlistint_t *del)
{
	dlistint_t *aux;

	aux = del->prev;
	del->prev = NULL;
	aux->next = NULL;
	free(del);
	return (1);
}


/**
 * del_first - function that deletes the first node at index of a list
 *
 * @head: head element of the list.
 *
 * @del: node to del.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int del_first(dlistint_t **head, dlistint_t *del)
{
	if (*head == NULL)
		return (-1);
	*head = (*head)->next;
	(*head)->prev = NULL;
	del->next = NULL;
	free(del);
	return (1);
}

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 *
 * @head: head element of the list.
 *
 * @index:number of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *aux;
	unsigned int i, r;

	if (*head == NULL || head == NULL)
		return (-1);
	del = *head;
	for (i = 0; i < index; i++)
	{
		del = del->next;
		if (del == NULL)
		{
			free(head);
			return (-1);
		}
	}
	if (del == *head)
	{
		r = del_first(&*head, del);
		return (r);
	}
	if (del->next == NULL)
	{
		r = del_last(del);
		return (r);
	}
	aux = del->prev;
	del->prev = NULL;
	aux->next = del->next;
	del->next->prev = aux;
	del->next = NULL;
	free(del);
	return (1);
}
