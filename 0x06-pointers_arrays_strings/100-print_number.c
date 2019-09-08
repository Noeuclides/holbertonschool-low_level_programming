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
	unsigned int d = 1, num = 0, ntop = 0, m = n;

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

	while (m / d >= 10)
		d *= 10;

	for (; d >= 1; d = d / 10)
	{
		num = m / d;
		ntop = (num % 10) + 48;
		_putchar(ntop);
	}
}
