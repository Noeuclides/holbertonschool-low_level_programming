#include "hash_tables.h"

/**
 * hash_table_get -
 *
 * Return: 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int hash;

	hash = hash_djb2((const unsigned char*)key);

       	if (strcmp((const char *)ht->array[hash]->value, key) != 0)
	{
		printf("different");
		return (NULL);
	}
		
	return (ht->array[hash]->value);
}
