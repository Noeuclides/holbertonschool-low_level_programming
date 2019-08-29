#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - function that makes a interpolation search
 *
 * @array: pointer to position 0 of an array of integers
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index where is the value or -1 if it isn't in the array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, hi, pos;
	int *a;

	if (!array)
		return (-1);

	a = array;
	low = 0;
	hi = size - 1;
	pos = low + ((value - a[low])  * (hi - low) / (a[hi]  - a[low]));

	if (pos > size - 1)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	while (pos < size - 1)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, a[pos]);
		if (value == a[pos])
			return (pos);
		else if (value > a[pos])
		{
			low = pos + 1;
			pos = low + ((value - a[low])  * (hi - low) / (a[hi]  - a[low]));
		}
		else
		{
			hi = pos - 1;
			pos = low + ((value - a[low])  * (hi - low) / (a[hi]  - a[low]));
		}
	}
		return (-1);
}
