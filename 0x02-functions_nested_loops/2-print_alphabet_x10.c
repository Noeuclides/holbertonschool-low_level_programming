#include "holberton.h"

/**
 *print_alphabet_x10 - writes the a to z c to stdout ten times
 *
 *_putchar: put character
 *
 */

void print_alphabet_x10(void)
{
	int n;
	int i;

	i = 0;

	do {
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);

		}
		_putchar('\n');
		i++;
	} while (i < 10);

}
