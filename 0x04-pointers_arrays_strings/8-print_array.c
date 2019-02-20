#include <stdio.h>
#include "holberton.h"

/**
*print_array - print list of items on a array
*
*@a: array
*
*@n: number of elements of an array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
			printf("%d\n", *(a + i));
	}
}
