#include "sort.h"

/**
 * counting_sort2 - Implementing radix sort LSD algorithm
 *
 * @array: array to sort
 * @count: array to count
 * @dec: multiple of ten (10, 100, 1000, etc) in which the counter goes
 * @size: size of the array
 *
 * Return: Nothing, print the array sort
 **/

void counting_sort2(int *array, int **count, int dec, size_t size)
{
	size_t i;
	int j, k, temp, temp2;

	k = 0;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < size; i++)
		{
			if ((array[i] / dec) % 10 == j)
				k++;
		}
		*(*count + j) = k;
	}
	/*shift count array to the right*/
	temp = *(*count);
	*(*count) = 0;
	for  (i = 1; i < 10; i++)
	{
		temp2 = *(*count + i);
		*(*count + i) = temp;
		temp = temp2;
	}
}

/**
 * find_large_num - Find the large number in an array
 *
 * @array: array to find
 * @size: size of the array
 *
 * Return: large number in the array
 **/

int find_large_num(int *array, size_t size)
{
	size_t j;
	int p = 1, dec, large_num = 0;

	for (j = 0; j < size; j++)
	{
		for (dec = p; array[j] / dec != 0; dec *= 10)
		{
			large_num = array[j];
			p = dec;
		}
	}
	return (large_num);
}

/**
 * radix_sort - Implementing radix sort LSD algorithm
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: Nothing, print the array sort
 **/

void radix_sort(int *array, size_t size)
{
	int *count = NULL, *new = NULL;
	size_t i, index_new;
	int dec, large_num = 0;

	if (size < 2 || array == NULL)
		return;

	count = malloc(sizeof(int) * 10);
	if (!count)
		return;
	for (i = 0; i < 10; i++)
		count[i] = 0;

	large_num = find_large_num(array, size);

	/*fill count array with the times value index is repeated*/
	for (dec = 1; large_num / dec != 0; dec *= 10)
	{
		counting_sort2(array, &count, dec, size);

		/*create new array and fill it*/
		new = malloc(sizeof(int) * size);
		if (!new)
			return;

		for (i = 0; i < size; i++)
		{
			index_new = count[(array[i] / dec) % 10];
			new[index_new] = array[i];
			count[(array[i] / dec) % 10] += 1;
		}
		for (i = 0; i < size; i++)
			array[i] = new[i];
		free(new);
		print_array(array, size);
	}
	free(count);
}
