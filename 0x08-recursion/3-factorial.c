#include "holberton.h"

/**
 *factorial - lenght of a string recursevely
 *
 *@n: integer to be factorialized
 *
 *Return: integer succeed, -1 when is negative, 1 when n = 0(exit condition)
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
