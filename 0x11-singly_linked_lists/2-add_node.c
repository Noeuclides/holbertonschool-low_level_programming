#include "lists.h"

/**
  *_strlen - return the lenght of an array
  *
  *@s: a character variable
  *
  *Return: return integer lenght of the array
  */

int _strlen(char *s)
{
	int i;
	int len;

	len = 0;

	for (i = -1; i < len; i++)
	{
		if ((s[len] == '\0'))
		{
			len = i;
		}
		else
		{
			len++;
		}
	}

	return (i);
}

/**
 * add_node - add nodes to the
 *
 *@head: direction of variable
 *
 *@str: string to be add
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strnew;
	list_t *temp;

	strnew = strdup(str);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strnew;
	temp->len = _strlen(strnew);
	temp->next = *head;
	*head = temp;
	if (head)
		return (*head);
	else
		return (NULL);
}
