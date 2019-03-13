#include "function_pointers.h"

/**
 * int_index - return the index of the array
 *
 *@array: array of integers
 *
 *@size: size of the array
 *
 *@cmp: function that compares an int with 0
 *
 * Return: -1 if does not match any element, i when success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

	}
	return (-1);
}
