#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that makes a binary search to find a number
 *
 * @array: pointer to position 0 of an array of integers
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index where is the value or -1 if it isn't in the array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), f = 1, l_izq = 0, l_der = 0, i = 0;
	int val = 0;

	if (!array)
		return (-1);

	l_der = step;
	while (l_der < size && *(array + l_izq) < value && f == 1)
	{
		val = *(array + l_izq);
		printf("Value checked array[%lu] = [%d]\n", l_izq, val);
		l_izq = l_der;
		l_der += sqrt(size);
		if (l_izq >= size)
			f = 0;
	}
	if (l_izq != 0)
	{
		l_der -= step;
		l_izq -= step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l_izq, l_der);
	if (l_der > size - 1)
		l_der = size - 1;
	for (i = l_izq; i <= l_der; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (value == *(array + i))
			return (i);
	}
	return (-1);

}
