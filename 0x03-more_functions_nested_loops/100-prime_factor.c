#include <stdio.h>

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

			if (cont == 2)
			{
				printf("%d", n);
			}
		}
		cont = 0;
	}
	printf("%c", \n);
	return (0);
}
