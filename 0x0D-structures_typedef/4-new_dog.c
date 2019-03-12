B#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 **new_dog - new dog function copy original
 *
 *@name: name of my dog
 *
 *@age: age of my dog
 *
 *@owner: owner of my dog
 *
 *Return: my dog copy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopy;

	snoopy = malloc(sizeof(dog_t));

	if (!snoopy)
		return (NULL);

	snoopy->name = strdup(name);
	if (snoopy->name == NULL)
		free(snoopy);
	snoopy->age = age;
	snoopy->owner = strdup(owner);
	if (snoopy->owner == NULL)
	{
		if (snoopy->name == NULL)
			free(snoopy);
		free(snoopy);
	}

	return (snoopy);
}
