#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 *
 *@head: address of the pointer that points to a node
 *
 *@n: interger in the node
 *
 * Return: variable type struct listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);

}
