#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if it is big endian, 1 if is little endian
 */

int get_endianness(void)
{
	unsigned int n = 0x76543210;
	char *c = (char *) &n;

	if (*c == 0x10)
		return (1);
	return (0);
}
