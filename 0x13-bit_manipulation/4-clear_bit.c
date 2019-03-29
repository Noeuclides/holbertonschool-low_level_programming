#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 *
 *@n: pointer to a number to evaluate
 *
 *@index: index of the number to be changed
 *
 * Return: 1 if it worked -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
