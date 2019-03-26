#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 *
 *@head: list of node struct
 *
 *@index: number of node to return
 *
 * Return: the node in the index position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
