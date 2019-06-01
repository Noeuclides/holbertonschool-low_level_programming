#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 *
 * @ht: hash table
 *
 * @key: key
 *
 * @value: value asociated to the key
 *
 * Return: 1 if succeed, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *new = NULL, *aux = NULL;

	if (strlen(key) == 0 || ht == NULL)
		return (0);

	hash = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[hash];
	for ( ; aux != NULL; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0)
		{
			aux->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[hash];
	ht->array[hash] = new;

	return (1);
}
