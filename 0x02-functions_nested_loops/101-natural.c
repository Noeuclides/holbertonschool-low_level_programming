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
	long n;
	long sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 | n % 5 == 0)
			sum += n;
	}
	printf("%ld\n", sum);
	return (0);
}
