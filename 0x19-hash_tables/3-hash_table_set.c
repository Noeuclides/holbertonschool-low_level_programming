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
	int hash;
	char *k_aux = NULL, *v_aux = NULL;
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	k_aux = strdup(key);
	v_aux = strdup(value);
	hash = hash_djb2((const unsigned char *)key);
	new->key = k_aux;
	new->value = v_aux;
	new->next = ht->array[hash];
	ht->array[hash] = new;

	return (1);
}
