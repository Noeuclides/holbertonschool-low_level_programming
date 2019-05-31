#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int hash;
	hash_node_t *new, *head = NULL;

	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);

	hash = hash_djb2((const unsigned char*)key);
	ht->array[hash]->key = (char *)key;
	ht->array[hash]->value = (char *)value;
	if (head == NULL)
	{
		head = ht->array[hash];
		return (1);
	}
	
	for (new = head; new->next != NULL; new = new->next)
		;
	ht->array[hash] = new;

	return (1);
}
