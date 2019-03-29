#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1
 *
 *@n: pointer to an integer
 *
 *@index: index to be changed to 1
 *
 * Return: 1 if it worked, -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(*n) * 8))
		return (-1);

	m = 1 << index;
	*n = *n | m;
	return (1);
}
