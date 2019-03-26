#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 *
 *@head: pointer to pointer that points to a list
 *
 *@index: node that should deleted
 *
 * Return: 1 if succeed, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodetodel, *firstnode;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	firstnode = *head;
	if (index != 0)
	{
		while ((i + 1) < index && (*head)->next != NULL)
		{
			*head = (*head)->next;
			i++;
		}
		if (i < index)
		{
			*head = firstnode;
			return (-1);
		}
	}
	else
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			firstnode->next = NULL;
			free(firstnode);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	nodetodel = (*head)->next;
	(*head)->next = nodetodel->next;
	nodetodel = NULL;
	*head = firstnode;
	free(nodetodel);
	return (1);
}
