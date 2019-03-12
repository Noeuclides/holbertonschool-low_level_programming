#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 **free_dog - free dog function
 *
 *@d: pointer to free
 *
 *Return: my dog copy
 */


void free_dog(dog_t *d)
{
	dog_t *snoopy;

	free(d);
	return (snoopy);
}
