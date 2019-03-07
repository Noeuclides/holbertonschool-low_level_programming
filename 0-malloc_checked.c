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
	int *n;

	n = malloc(b);

	if (!n)
	{
		free(n);
		exit(98);
	}

	return (n);

}
