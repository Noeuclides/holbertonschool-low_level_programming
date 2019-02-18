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

	for (i = 0; i < 50; i++)
	{
		z = x + y;

		if (i != 49)
		{
			printf("%ld, ", z);
		}
		else
			printf("%ld\n", z);

		y = x;
		x = z;
	}
	return (0);
}
