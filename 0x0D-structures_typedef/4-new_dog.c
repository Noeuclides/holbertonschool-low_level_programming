#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 *_strdup - dup string function
 *
 *@str: string to copy
 *
 *Return: string copied
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	p = malloc(sizeof(char) * (i + 1));

	if (!p)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';

	return (p);
}

/**
 *new_dog - new dog function copy original
 *
 *@name: name of my dog
 *
 *@age: age of my dog
 *
 *@owner: owner of my dog
 *
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopy;

	snoopy = malloc(sizeof(dog_t));

	if (!snoopy)
	{
		free(snoopy);
		return (NULL);
	}

	snoopy->name = _strdup(name);
	if (snoopy->name == NULL)
	{
		free(snoopy);
	}
	snoopy->age = age;
	snoopy->owner = _strdup(owner);
	if (snoopy->owner == NULL)
	{
		free(name);
		free(snoopy);
	}

	return (snoopy);
}
