#include "search_algos.h"
#include <math.h>


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


/**
 * exponential_search - function that makes a exponential search
 *
 * @array: pointer to position 0 of an array of integers
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index where is the value or -1 if it isn't in the array
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, first;
	int bs = 0;
	int *a;

	if (!array)
		return (-1);

	a = array;
	if (a[i] == value)
		return (i);

	i++;
	while (i < size - 1 && a[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, a[i]);
		i = i * 2;
	}
	first = i / 2;
	a = array + first;
	if (i > size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", first, size - 1);
		bs = binary_search(a, size - first, value);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", first, i);
		bs = binary_search(a, i, value);
	}
	if (bs != -1)
		return (bs + first);
	return (-1);
}
