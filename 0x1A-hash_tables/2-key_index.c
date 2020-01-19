#include "hash_tables.h"
/**
 * key_index - Function implementing the djb2 algorithm.
 * @key: Key is the key.
 * @size: Size is the size of the array of the hash table.
 * Return: Index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx;

	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);

	key_idx = (hash_djb2(key) % size);

	return (key_idx);
}
