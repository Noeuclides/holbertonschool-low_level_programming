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
	int deci;
	int digi;


	for (deci = 48; deci <= 57; deci++)
	{

		for (digi = 48; digi <= 57; digi++)
		{
			putchar(deci);
			putchar(digi);

			if (!(deci == 57 && digi == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');

	return (0);
}
