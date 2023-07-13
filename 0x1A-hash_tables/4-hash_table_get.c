#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - get a value from the key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value of the hash table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *hs_node = NULL;

	if (!key || !ht || !strlen(key))
		return (NULL);
	index = key_index((unsigned char *) key, ht->size);
	hs_node = ht->array[index];
	if (!hs_node)
		return (NULL);

	while (hs_node)
	{
		if (strcmp(hs_node->key, key) == 0)
			return (hs_node->value);
		hs_node = hs_node->next;
	}
	return (NULL);
}
