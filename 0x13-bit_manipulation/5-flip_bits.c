#include "holberton.h"

/**
 * flip_bits - function that return the number of bits to flip from n to m
 *
 *@n: first number to compare
 *
 *@m: second number to compare
 *
 * Return: the number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nb, mb;

	if (n == 0 && m == 0)
		return (0);
	if ((n & 1) == (m & 1))
	{
		nb = n >> 1;
		mb = m >> 1;
		return (0 + flip_bits(nb, mb));
	}

	nb = n >> 1;
	mb = m >> 1;
	return (1 + flip_bits(nb, mb));
}
