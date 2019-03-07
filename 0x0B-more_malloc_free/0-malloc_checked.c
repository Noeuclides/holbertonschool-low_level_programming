#include "holberton.h"
#include <stdlib.h>

/**
**malloc_checked - allocate memory using malloc
*
*@b: unsigned int
*
*Return: the pointer
**/

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (!n)
	{
		exit(98);
	}

	return (n);
}
