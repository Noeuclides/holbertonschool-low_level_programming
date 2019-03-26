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

	matrix = malloc(sizeof(int *) * (height));

	if (!matrix)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * (width));
		if (!matrix[i])
		{
			for (; i >= 0; i--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
