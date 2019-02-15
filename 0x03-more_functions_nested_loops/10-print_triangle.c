#include "holberton.h"

/**
 *print_triangle - print a triangle with character #
 *
 *@size: the size of the square
 *
 *_putchar: put character
 *
 */

void print_triangle(int size)
{
	int i, j, k;
	int l = 1;
	int h = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < h; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= l; k++)
			{
				_putchar('#');
			}
			if (l != size)
			_putchar('\n');

			h-=1;
			l++;
		}
	}
	_putchar('\n');
}
