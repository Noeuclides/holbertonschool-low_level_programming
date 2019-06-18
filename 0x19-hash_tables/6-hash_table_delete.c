#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hash table to erase
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del = NULL, *aux = NULL;
	unsigned long int i;

	if (ht == NULL)
	{
		free(ht->array);
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			del = aux;
			aux = aux->next;
			free(del->key);
			free(del->value);
			free(del);
		}
		free(ht->array[i]);
	}
	free(ht);
}
