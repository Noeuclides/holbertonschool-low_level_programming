#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that makes a jump search in linked list
 *
 * @list: pointer to position first element of the list
 * @size: size of the list
 * @value: value to find
 *
 * Return: the node where is the value or NULL if it isn't in the array
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), f = 1, l_left = 0, l_right = 0, i = 0, j = 0;
	listint_t *l = list, *r = list;

	if (!list)
		return (NULL);
	l_right = step;
	while ((r->n) < value && f == 1)
	{
		l = r;
		for (j = l_left; j < l_right; j++)
			r = r->next;

		printf("Value checked at index [%lu] = [%d]\n", r->index, r->n);
		if (l_right != size - 1)
			l_left = l_right;
		else
			f = 0;
		l_right += sqrt(size);
		if (l_right > size - 1 && (r->n) < value)
			l_right =  size - 1;
	}

	if (l_left != 0 && l_right != size - 1)
	{
		l_right -= step;
		l_left -= step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", l_left, l_right);
	if (l_right > size - 1)
		l_right = size - 1;
	for (i = l_left; i <= l_right && l; i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", l->index, l->n);
		if (value == l->n)
			return (l);
		l = l->next;
	}
	return (NULL);
}
