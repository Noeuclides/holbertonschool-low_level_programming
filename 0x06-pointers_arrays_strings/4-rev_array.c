#include "holberton.h"

/**
 *reverse_array - reverse int array
 *
 *@a: pointer array
 *
 *@n: lenght of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;
	int m;

	if (n % 2 != 0)
		m = n + 1;
	else
		m = n;

	for (i = 0; i < m / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}

}
