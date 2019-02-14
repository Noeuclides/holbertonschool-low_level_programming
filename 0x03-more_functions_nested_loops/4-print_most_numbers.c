#include "holberton.h"

/**
 *print_most_numbers - multiplies two variables
 *
 *_putchar: put character
 *
 *Return: 0 always (succeed)
 */

void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n != 50 && n != 52)
		{
		_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
