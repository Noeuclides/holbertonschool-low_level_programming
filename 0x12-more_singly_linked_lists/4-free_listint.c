#include "lists.h"

/**
 * free_listint - function that free a lost
 *
 *@head: node to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head != NULL)
	{
		freenode = head;
		head = head->next;
		free(freenode);
	}
}
