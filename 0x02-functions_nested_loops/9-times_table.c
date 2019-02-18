#include "holberton.h"

/**
 *times_table - nine table
 *
 *Return: m (success)
 */

void times_table(void)
{
	int i;
	int n2;
	int n3;
	int n4;

	for (i = 0; i <= 10; i++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			n = 0 * m;

			for (n3 = 0; n3 < 6; n3++)
			{
				for (n4 = 0; n4 <= 9; n4++)
				{
					_putchar(n1 + '0');
					_putchar(n2 + '0');
					_putchar(':');
					_putchar(n3 + '0');
					_putchar(n4 + '0');
					_putchar('\n');
				}
			}
		}
	}
	n1 = 2;
	for (n2 = 0; n2 <= 3; n2++)
	{
		for (n3 = 0; n3 < 6; n3++)
		{
			for (n4 = 0; n4 <= 9; n4++)
			{
				_putchar(n1 + '0');
				_putchar(n2 + '0');
				_putchar(':');
				_putchar(n3 + '0');
				_putchar(n4 + '0');
				_putchar('\n');
			}
		}
	}
}
