#include "holberton.h"
#include <stdlib.h>

/**
 **_realloc - reallocate memory
 *
 *@ptr:
 *
 *@old_size: max value
 *
 *@new_size:
 *
 *Return: the pointer
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (!ptr)
		return (NULL);
	if (ptr == NULL)
	{
		new_ptr = malloc(sizeof(char) * new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	new_ptr = malloc(sizeof(char) * new_size);
	if (!new_ptr)
		return (NULL);
	if (new_size > old_size)
	{
		free (ptr);
	}
	else if (new_size == old_size)
		return (ptr);

	return (new_ptr);
}
