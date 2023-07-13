#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long i = 0;
	hash_node_t *ht_node = NULL;
	hash_node_t *ht_temp = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			ht_node = ht->array[i];
			while (ht_node != NULL)
			{
				ht_temp = ht_node->next;
				free(ht_node->key);
				free(ht_node->value);
				free(ht_node);
				ht_node = ht_temp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
