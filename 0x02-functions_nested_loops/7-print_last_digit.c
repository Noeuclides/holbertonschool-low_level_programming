#include "holberton.h"

/**
 *print_last_digit - print last number
 *
 *@n: variable
 *
 *Return: m (success)
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		_putchar('0' + (m * -1));
		return (m * -1);
	}
	_putchar(m + '0');
	return (m);

}
