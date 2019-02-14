#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - print numbers from variable until 98
 *
 *@n: first variable
 *
 *Return: result (success)
 */

void print_to_98(int n)
{
	while  (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}

	printf("%d\n", n);
}
