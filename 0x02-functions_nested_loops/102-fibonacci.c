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
	int x = 1;
	int y = 0;
	int z;
	int i;

	for (i = 0; i < 50; i++)
	{
		z = x + y;

		if (i != 49)
		{
			printf("%d, ", z);
		}
		else
			printf("%d\n", z);

		y = x;
		x = z;
	}
	return(0);
}
