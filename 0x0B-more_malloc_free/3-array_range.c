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
	int i, num;

	num = max - min;

	if (num >= 0)
	{
		p = malloc(sizeof(int) * num + 1);

		if (!p)
			return (NULL);
		for (i = 0; i <= num; i++)
		{
			p[i] = min + i;
		}
	}
	else
		return (NULL);
	return (p);
}
