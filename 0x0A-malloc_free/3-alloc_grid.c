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
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * (width));

	if (!matrix)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(sizeof(int) * (height));
		if (!matrix[i])
		{
			for (; i >= 0; i--)
			{
				free(matrix[i]);
				return (NULL);
			}
			free(matrix);
		}
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
