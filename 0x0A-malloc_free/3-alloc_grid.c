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

	matrix = malloc(sizeof(int *) * (width));

	if (!matrix)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(sizeof(int) * height);

		for (j = 0; j < height; j++)
		{
			if (!matrix[i])
			{
				free(matrix);
				return (NULL);
			}
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
