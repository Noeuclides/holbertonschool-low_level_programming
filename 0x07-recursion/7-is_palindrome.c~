#include "holberton.h"

/**
 *is_prime_number - primer numbers recursive
 *
 *@n: integer
 *
 *Return: 1 if n is prime, 0otherwise
 */

int is_prime_number(int n)
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
