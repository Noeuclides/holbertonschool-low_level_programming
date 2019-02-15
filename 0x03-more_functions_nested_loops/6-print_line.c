#include "holberton.h"

/**
 *print_line - print "_"
 *
 *@n: times to print "_"
 *
 *_putchar: put character
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}