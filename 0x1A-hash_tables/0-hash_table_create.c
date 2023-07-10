#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table, NULL if somethig wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned int i = 0;
	
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t*) * size);

	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	/* initialize all element in array to NULL */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);

}
