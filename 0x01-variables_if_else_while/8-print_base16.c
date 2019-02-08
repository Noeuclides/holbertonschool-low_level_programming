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

	for (n = 48; n < 59; n++)
	{
		putchar(n);
	}

	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}


	putchar(10);

	return (0);
}
