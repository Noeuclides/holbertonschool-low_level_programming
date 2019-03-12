#include "dog.h"
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
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	p = malloc(sizeof(char) * i + 1);

	if (!p)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}

	return (p);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopy;

	snoopy = malloc(sizeof(dog_t));

	if (!snoopy)
		return (NULL);

	snoopy->name = _strdup(name);
	if (snoopy->name == NULL)
		free(snoopy);
	snoopy->age = age;
	snoopy->owner = _strdup(owner);
	if (snoopy->owner == NULL)
	{
		if (snoopy->name == NULL)
			free(snoopy);
		free(snoopy);
	}

	return (snoopy);
}