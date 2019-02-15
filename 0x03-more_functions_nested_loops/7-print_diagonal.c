#include "holberton.h"

/**
 *print_diagonal - print "\"
 *
 *@n: times to print "_"
 *
 *_putchar: put character
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			if (i != n - 1)
			{
				_putchar('\n');
				for (j = -1; j < i; j++)
				{
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');

}
