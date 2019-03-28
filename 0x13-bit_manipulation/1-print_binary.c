#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 *@n: unsigned integer to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;

	if (n > 1)
	{
		m = n >> 1;
		print_binary(m);
		_putchar((n & 1) + 48);
	}
	else
	{
		if (n == 0)
			_putchar('0');
		else
			_putchar((n & 1) + 48);
	}
}
