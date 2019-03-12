#ifndef STRUCT_1
#define STRUCT_1
#include "dog.h"

/**
 * struct dog - structure
 *
 *@name: name of the dog
 *
 *@age: age of the dog
 *
 *@owner: owner of the dog
 *
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif