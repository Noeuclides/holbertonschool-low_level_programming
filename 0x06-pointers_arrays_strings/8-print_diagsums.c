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
	int sum = 0;
	int sumdiag1 = 0;

	for (i = 0; i <= size; i++)
	{
		sumdiag1 = a[i][i] + sum;
		sum = sumdiag1;
	}
	printf("%d\n", sumdiag1);

}
