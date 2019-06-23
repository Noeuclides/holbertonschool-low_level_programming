#include "sort.h"

/**
 * counting_sort2 - Implementing radix sort LSD algorithm
 *
 * @array: array to sort
 * @max: max number of the array
 * @size: size of the array
 *
 * Return: array of integer, NULL if it fails.
 **/

int *counting_sort2(int *array, int max, size_t size)
{
	int *count = NULL;
	size_t i;
	int j, k, temp, temp2;

	count = malloc(sizeof(int) * (max + 1));
	if (!count)
		return (NULL);
	k = 0;
	for (j = 0; j <= max; j++)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == j)
				k++;
		}
		count[j] = k;
	}
	print_array(count, max);
	/*shift count array to the right*/
	temp = count[0];
	count[0] = 0;
	for  (j = 1; j <= max; j++)
	{
		temp2 = count[i];
		count[i] = temp;
		temp = temp2;
	}
	return (count);
}

/**
 * find_max - Find the max number in an array
 *
 * @array: array to find
 * @size: size of the array
 *
 * Return: large number in the array
 **/

int find_max(int *array, size_t size)
{
	size_t i, j;
	int max = 0;

	i = 0;
	j = i + 1;
	max = array[0];
	while (i < (size - 1))
	{
		if (max < array[j])
			max = array[j];
		i++;
		j++;
	}

	return (max);
}

/**
 * counting_sort - Implementing counting sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: Nothing, print the array sort
 **/

void counting_sort(int *array, size_t size)
{
	int *count = NULL, *new = NULL;
	size_t i = 0;
	int max = 0, index_new = 0;

	if (size < 2 || array == NULL)
		return;

	max = find_max(array, size);

	max += 1;

	count = counting_sort2(array, max, size);
	if (!count)
		return;

	/*create new array and fill it*/
	new = malloc(sizeof(int) * size * 2);
	if (!new)
		return;

	for (i = 0; i < size; i++)
	{
		index_new = count[array[i]];
		new[index_new - 1] = array[i];
		count[array[i]] += 1;
	}
	free(count);
	for (i = 0; i < size; i++)
		array[i] = new[i];
	free(new);
}
