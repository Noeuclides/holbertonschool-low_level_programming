#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets head to NULL
 *
 *@head: pointer to pointer that points to a struct
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode2;

	while (*head != NULL)
	{
		freenode2 = *head;
		*head = (*head)->next;
		free(freenode2);
	}
	*head = NULL;
}
