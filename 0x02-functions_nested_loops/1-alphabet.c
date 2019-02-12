#include "holberton.h"

/**
 *print_alphabet - calls put char
 *
 *print_alphabet: writes the a to z c to stdout
 *
 *_putchar: put character
 *
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
