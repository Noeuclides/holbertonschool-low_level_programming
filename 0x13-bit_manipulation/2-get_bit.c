#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit
 *
 *@n: number in decimal system to evaluate
 *
 *@index: bit to be found
 *
 * Return: the value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > (sizeof(n) * 8))
		return (-1);

	i = n >> index & 1;

	return (i);
}
