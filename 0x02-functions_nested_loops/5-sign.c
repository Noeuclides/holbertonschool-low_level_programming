#include "holberton.h"

/**
 *print_sign - 1, 0, -1 if are positive, negative or zero
 *
 *@n: lowcase or something else character
 *
 *_putchar: put character depend of the return
 *
 *Return: 1, 0 or -1 (success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);


}
