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

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}

	for (N = 65; N < 91; N++)
	{
		putchar(N);
	}

	putchar(10);

	return (0);
}
