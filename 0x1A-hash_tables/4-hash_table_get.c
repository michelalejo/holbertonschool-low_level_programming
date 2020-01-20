#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Hash table you want to add or update.
 * @key: The key.
 * Return: The value in the idx,, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	new = ht->array[idx];
	while (new)
	{
		if (strcmp(new->key, key) == 0)
		{
			return (new->value);
		}
		new = new->next;
	}
	return (NULL);
}
