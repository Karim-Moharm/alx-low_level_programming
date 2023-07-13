#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds a element to hash table
 *
 * Description: adds an element to hash table and in case of
 * collision add the new node at the beginning of the list
 *
 * @ht: the hash table
 * @key: the key of hash element
 * @value: the value of that key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *ht_curr_node = NULL;

	index = key_index(key, ht->size)
	if (key == NULL || ht == NULL || strlen(key) == 0 || index < 0)
		return (0);
	ht_curr_node = ht->array[index];

	while (ht_curr_node)
	{
		if (strcmp(ht_curr_node->key, key) == 0)
		{
			free(ht_curr_node->value);
			strcpy(ht_curr_node->value, value);
			return (1);
		}
		ht_curr_node = ht_curr_node->next;
	}

	ht_curr_node = malloc(sizeof(hash_node_t));
	if (!ht_curr_node)
		return (0);

	strcpy(ht_curr_node->key, key);
	strcpy(ht_curr_node->value, value);
	ht_curr_node->next = (ht->array)[index];
	(ht->array)[index] = ht_curr_node;
	return (1);
}
