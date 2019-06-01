#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 *
 * @ht: hash table to look into
 *
 * @key: key to looking for
 *
 * Return: value associated to key, or NULL if fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *aux;

	if (strlen(key) == 0 || ht == NULL)
		return (NULL);

	hash = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[hash];
	for ( ; aux != NULL; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
	}
	return (NULL);
}
