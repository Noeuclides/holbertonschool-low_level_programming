#include <stdio.h>
#include "holberton.h"

/**
 *main - entry point
 *
 *printf: print prime number
 *
 *Return: 0 always (succeed)
 */

int main(void)
{
	int n;
	int i;
	int cont;

	for (n = 1; n <= 20; n++)
	{
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				cont++;
			}
		}

		if (cont == 2)
		{
			printf("%d\n", n);
		}
		cont = 0;
	}
	prime_list
	return (0);
}
