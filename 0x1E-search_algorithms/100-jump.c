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

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), f = 1, lim_izq = 0, lim_der = 0, i = 0;

	if (!array)
		return(-1);

	lim_der = step;
	while(*(array + lim_izq) < value && f == 1)
	{
		printf("Value checked array[%lu] = [%d]\n", lim_izq, *(array + lim_izq));
		lim_izq = lim_der;
		lim_der += sqrt(size);
		if (lim_izq > size)
			f = 0;
	}
	lim_der -= step;
	lim_izq -= step;
	printf("Value found between indexes [%lu] and [%lu]\n", lim_izq, lim_der);
	if (lim_der > size - 1)
		lim_der = size -1;
	for ( i = lim_izq; i <= lim_der; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if(value == *(array + i))
			return(i);
	}

	return(-1);

}
