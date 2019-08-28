#include "search_algos.h"

/**
 *
 *
 *
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int *aux = array;
	size_t i, j, k = 0;

	if (!array)
		return(-1);

	for (i = k; i < size - 1; i++)
	{
		printf("Searching in array: ");
		for (j = k; j < size - 1; j++)
			printf("%d, ", *(aux + j));

		printf("%d\n", *(aux + j));

		aux = array;
		if (size % 2 == 0)
			size++;
		printf("size / 2 = %lu\n", size / 2);
		if (*(aux + (size / 2) - 1) == value)
			return(size / 2);
		else if (*(aux + (size / 2) - 1) < value)
			k = size / 2;
		else
			size = (size / 2) - 1 - k;
	}
	return(-1);

}
