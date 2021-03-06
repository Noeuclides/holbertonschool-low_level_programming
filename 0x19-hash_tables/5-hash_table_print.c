#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i, j = ht->size;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size - 1; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			j = i;
			aux = aux->next;
			if (aux != NULL)
				printf(", ");
		}
		if (i > j && ht->array[i + 1] != NULL)
			printf(", ");
	}
	if (ht->array[i] != NULL)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			j = i;
			aux = aux->next;
			if (aux != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
