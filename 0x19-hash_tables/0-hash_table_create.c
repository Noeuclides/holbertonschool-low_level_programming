#include "hash_tables.h"

/**
 * hash_table_create - Creates a struct variable that points to a hash table
 *
 *@size: size of the array
 *
 * Return: pointer to the struct, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_node_t *));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	free(table->array);
	free(table);

	return (table);
}