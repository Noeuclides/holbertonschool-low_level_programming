#include "hash_tables.h"

/**
 * hash_table_delete -
 *
 * @ht: 
 *
 * Return: 
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		aux = del;
		while (del->next != NULL)
		{
			del = del->next;
		}
		free(del);
		while (ht->array[i] != NULL)
		{
			
		}
		
		
	}
}
