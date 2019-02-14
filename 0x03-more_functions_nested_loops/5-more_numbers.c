#include "holberton.h"

/**
 *more_numbers - print numbers 0 to 14
 *
 *_putchar: put character
 *
 *Return: 0 always (succeed)
 */

void more_numbers(void)
{
	int i = 0;
	int n = 48;
	int j = 0;
	int h = 57;

	while (j < 10)
	{
		while (i < 15)
		{
			while (n <= h)
			{
				if (i > 9)
				{
					_putchar(49);
				}
				_putchar(n);
				i++;
				n++;
			}
			h = 52;
			n = 48;
		}
		_putchar('\n');
		h = 57;
		n = 48;
		i = 0;
		j++;
	}
}
