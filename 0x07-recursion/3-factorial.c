#include "holberton.h"

/**
 *factorial - lenght of a string recursevely
 *
 *n: integer to be factorialized
 *
 *_putchar: put chararacter
 *
 *Return: 0 finish, 1 keeps recursion
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
