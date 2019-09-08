#include "holberton.h"
#include <stdio.h>

/**
 **print_number - print an integer with __putchar function
 *
 *@n: integer tob e printed
 *
 *Return: void
 *
 */

void print_number(int n)
{
	unsigned int d = 10, num = 0, ntop = 0, m = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		m = n * (-1);
	}

	m = n;
	while (m / d > 0)
		d *= 10;

	d = d / 10;
	for (; d >= 1; d = d / 10)
	{
		num = m / d;
		ntop = (num % 10) + 48;
		_putchar(ntop);
	}
}
