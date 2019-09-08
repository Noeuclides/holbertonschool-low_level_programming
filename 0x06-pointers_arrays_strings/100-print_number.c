#include "holberton.h"

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
	int d = 10, num = 0, ntop = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}

	while (n / d > 0)
		d *= 10;

	d = d / 10;
	for (; d >= 1; d = d / 10)
	{
		num = n / d;
		ntop = (num % 10) + 48;
		_putchar(ntop);
	}
}
