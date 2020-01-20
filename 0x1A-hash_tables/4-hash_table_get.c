#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Hash table you want to add or update.
 * @key: The key.
 * @value: The value associated with the key. value must be duplicated.
 * Return: 1 if it succeeded, otherwise 0.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new, *n_two;
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	new = ht->array[idx];
	while (new)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			if (new->value == NULL)
				return (0);
			return (1);
		}
		new = new->next;
	}
}
