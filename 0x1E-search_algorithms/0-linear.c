#include "search_algos.h"

/**
 * linear_search - function that makes a linear search to find a number
 *
 * @array: pointer to position 0 of an array of integers
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index where is the value or -1 if it isn't in the array
 */

int linear_search(int *array, size_t size, int value)
{
	int *aux = array;
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *aux);
		if (*aux == value)
			return (i);
		aux++;
	}
	return (-1);

}
