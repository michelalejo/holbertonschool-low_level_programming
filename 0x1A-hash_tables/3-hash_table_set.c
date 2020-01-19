#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Hash table you want to add or update.
 * @key: The key.
 * @value: The value associated with the key. value must be duplicated.
 * Return: 1 if it succeeded, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new = ht->array[idx], *n_two;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			if (new->value != NULL)
				return (1);
			return (1);
		}
		new = new->next;
	}
	n_two = malloc(sizeof(hash_node_t));

	if (n_two == NULL)
		return (0);
	n_two->key = strdup(key);
	n_two->value = strdup(value);

	if (n_two->key == NULL  || n_two->value == NULL)
		return (0);
	n_two->next = ht->array[idx];
	ht->array[i] = n_two;

	return (1);
}
