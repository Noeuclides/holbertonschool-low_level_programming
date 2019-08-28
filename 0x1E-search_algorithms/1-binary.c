#include "search_algos.h"

/**
 * binary_search - function that makes a binary search to find a number
 *
 * @array: pointer to position 0 of an array of integers
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index where is the value or -1 if it isn't in the array
 */

int binary_search(int *array, size_t size, int value)
{
	int *aux = array;
	size_t i = 0, k = size - 1, j = 0;

	if (!array)
		return (-1);

	while (i <= k)
	{
		j = i;
		printf("Searching in array: ");
		for (j = i; j < k; j++)
		{
			printf("%d, ", *(aux + j));
		}

		printf("%d\n", *(aux + j));

		if (*(aux + (i + k) / 2) < value)
			i = ((i + k) / 2) + 1;
		else if (*(aux + (i + k) / 2) > value)
			k = ((i + k) / 2) - 1;
		else
			return ((i + k) / 2);

	}
	return (-1);

}
