#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the array.
 * Return: Returns a pointer to the newly created hash table or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *n_hash = malloc(sizeof(hash_table_t) * 1);

	if (n_hash == NULL)
	{
		free(n_hash);
		return (NULL);
	}

	n_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (n_hash->array == NULL)
	{
		free(n_hash);
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		n_hash->array[i] = NULL;
	}
	n_hash->size = size;

	return (n_hash);
}
