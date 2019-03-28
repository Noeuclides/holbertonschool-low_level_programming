#include "holberton.h"

/**
 * binary_to_uint - function that converts binary to unsigned int
 *
 *@b: string with 1 and 0s
 *
 * Return: 0 if there is not 0 or 1. the conversion binary to uns int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, n, aux = 0, pow = 1, sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	n = i - 1;
	if (i == 1 && b[0] == '1')
		return (1);
	while (i)
	{
		pow = 1;
		j = i - 1;
		if (b[j] == '1')
		{
			if (n == j)
				sum = 1;
			while (j < n)
			{
				pow *= 2;
				aux = pow;
				j++;
			}
			sum += aux;
		}
		i--;
	}
	return (sum);
}
