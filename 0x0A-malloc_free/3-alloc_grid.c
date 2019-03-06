#include "holberton.h"
#include <stdlib.h>

/**
 ****alloc_grid - create an array of char
 *
 *@width: string parameter
 *
 *@height: second string parameter
 *
 *Return: array of char
 */

int **alloc_grid(int width, int height)
{
	int *w;
	int *h,
	unsigned int i, j, k, n, concat;

	w = malloc(sizeof(int) * (width));
	h = malloc(sizeof(int) * (height));

	if (!p)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; n++)
	{
		for (j = 0; j < width; j++)
		{
				w[j] = 0;
		}
	}

	return (p);
}
