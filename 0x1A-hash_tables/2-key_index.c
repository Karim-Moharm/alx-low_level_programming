#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: the key of the item in the table
 * @size: size of the array of hash table
 *
 * Return: index of the key according to hash_djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x = hash_djb2(key);
	return (x / size);

}
