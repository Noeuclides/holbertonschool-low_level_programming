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

	_putchar('0' + m);
	return (m);

}
