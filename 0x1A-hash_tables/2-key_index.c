#include "hash_tables.h"

/**
 * key_index - Computes the index for a key, for a given array size.
 *
 * @key: The string whose index is desired.
 * @size: The size of the array of the Hash Table.
 *
 * Return: The index for the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
