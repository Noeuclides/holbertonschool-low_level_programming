#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if it is big endian, 1 if is little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *c = (char *) &n;

	return (*c);
}
