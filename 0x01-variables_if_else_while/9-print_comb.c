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

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(44);

			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
