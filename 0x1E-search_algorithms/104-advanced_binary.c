#include "search_algos.h"

/**
 * advanced_binary - function that makes a advanced binary search
 *
 * @array: pointer to position 0 of an array of integers
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index where is the value or -1 if it isn't in the array
 */

int advanced_binary(int *array, size_t size, int value)
{
	int *a = array;
	size_t i = 0, k = size - 1, j = 0;
	int bs = 0;

	if (!array)
		return (-1);
	j = i;
	printf("Searching in array: ");
	for (j = i; j < k; j++)
	{
		printf("%d, ", *(a + j));
	}

	printf("%d\n", *(a + j));

	if (array[i] == value)
		return (i);
	else if (size == 1)
		return (-1);

	if (*(a + (i + k) / 2) < value)
	{
		i = ((i + k) / 2) + 1;
		array = array + i;
		bs = advanced_binary(array, size - i, value);
	}
	else
	{
		k = ((i + k) / 2) + 1;
		bs = advanced_binary(array, k, value);
	}
	if (bs != -1)
		return (bs + i);

	return (-1);

}
