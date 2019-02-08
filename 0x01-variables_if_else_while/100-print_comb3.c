#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *putchar: print a string format
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int N;

	n = 48;
	N = 48;

	while (n < 58)
	{
		do {
			if (n < N)
			{
				putchar(n);
				putchar(N);

				if (n != 56 || N != 57)
				{
					putchar(44);
					putchar(32);
				}
			}

			N++;
		} while (N < 58);

		n++;
		N = 48;
	}

	putchar(10);

	return (0);
}
