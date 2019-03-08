#include "holberton.h"
#include <stdlib.h>

/**
**_calloc - initialized an array with zero (calloc function)
*
*@nmemb: number of elements
*
*@size: size of the variable
*
*Return: the pointer
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (!p)
		return (NULL);

	for (i = 0; i <  nmemb * size; i++)
		p[i] = 0;

	return (p);
}
