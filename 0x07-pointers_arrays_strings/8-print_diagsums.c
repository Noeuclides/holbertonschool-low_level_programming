#include <stdio.h>
#include "holberton.h"

/**
 *print_diagsums - print the sum of the diagonals of a square matrix
 *
 *@a: pointer to the matrix
 *
 *@size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumdiag1 = 0;
	int sumdiag2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sumdiag1 += *(a + i);
	}
	printf("%d, ", sumdiag1);

	for (i = size - 1; i + size <= size * size; i += (size - 1))
	{
		sumdiag2 += *(a + i);
	}
	printf("%d\n", sumdiag2);

}
