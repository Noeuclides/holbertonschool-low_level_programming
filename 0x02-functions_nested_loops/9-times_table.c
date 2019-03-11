#include "holberton.h"

/**
 *times_table - nine table
 *
 *Return: m (success)
 */

void times_table(void)
{
	int i, mul, n;

	for (mul = 0; mul <= 9; mul++)
	{
		for (i = 0; i <= 9; i++)
		{
			n = mul * i;

			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (i == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				if (n < 10)
					_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
