#include "holberton.h"

/**
 *print_numbers - multiplies two variables
 *
 *_putchar: put character
 *
 *Return: 0 always (succeed)
 */

void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
