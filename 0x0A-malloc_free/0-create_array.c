#include "holberton.h"
#include <stdlib.h>

/**
 ** *create_array - create an array of char
 *
 *@size: size of memory to print
 *
 *@c: character to put in the array
 *
 *Return: array of char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (!p)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
