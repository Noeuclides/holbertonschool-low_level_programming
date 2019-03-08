#include "holberton.h"
#include <stdlib.h>

/**
* *array_range - create an array of integers
*
*@min: min value
*
*@max: max value
*
*Return: the pointer
**/

int *array_range(int min, int max)
{
	int *p;
	int i, j, num;

	num = max - min;

	if (num >= 0)
	{
		p = malloc(sizeof(int) * num + 1);

		if (!p)
			return (NULL);
		for (i = 0, j = min; i <= num + 1 && j <= max; i++, j++)
		{
			p[i] = j;
		}
	}
	else
		return (NULL);
	return (p);
}
