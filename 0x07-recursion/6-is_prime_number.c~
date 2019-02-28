#include "holberton.h"

/**
 *_sqrt_recursion - sqrt function recursive
 *
 *@n: result of a pow function
 *
 *Return: result integer, -1 if is lower than 0
 */

int _sqrt_recursion(int n)
{
	int m;

	if (n / 2 > 1)
	{
		m = _sqrt_recursion(n / 2);
		return (funaux(m, n));
	}
	else if (n / 2 == 1 || n / 2 == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
