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
	int n1;
	int n2;
	int n3;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = 48; n2 < 58; n2++)
		{
			for (n3 = 48; n3 < 58; n3++)
			{
				if (n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);

					if (n1 != 55 || n2 != 56 || n3 != 57)
					{
						putchar(44);
						putchar(32);
					}

				}
			}
		}
	}

	putchar(10);

	return (0);
}
