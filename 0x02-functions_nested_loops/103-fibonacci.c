#include <stdio.h>

/**
 *main - entry point
 *
 *printf: print fibonacci
 *
 *Return: 0 always (succeed)
 */

int main(void)
{
	long x = 1;
	long y = 0;
	long z;
	long i;
	long n = 0;

	for (i = 0; i < 50; i++)
	{
		z = x + y;

		if (z % 2 == 0 && n < 4000000)
		{
			n += z;
		}

		y = x;
		x = z;
	}
	printf("%ld\n", n);
	return (0);
}
