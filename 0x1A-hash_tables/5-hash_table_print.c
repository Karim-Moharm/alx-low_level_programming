#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ht_node = NULL;
	char flag = 0;

	if (!ht)
		printf("{}\n");
	else
	{
		while (i < ht->size)
		{
			if (ht->array[i])
			{
				if (flag == 1)
					printf(", ");

				ht_node = ht->array[i];
				while (ht_node)
				{
					printf("{'%s': '%s'}",
							 ht_node->key, ht_node->value);
					ht_node = ht_node->next;
					if (ht_node)
						printf(", ");
				}
				flag = 1;
			}
			i++;
		}
		printf("\n");
	}
}
