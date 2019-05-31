#include "hash_tables.h"

/**
 * key_index - return index of a key
 *
 *@key: key to hash
 *
 *@size: size of array
 *
 * Return: index of array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (key == NULL)
		exit(-1);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
