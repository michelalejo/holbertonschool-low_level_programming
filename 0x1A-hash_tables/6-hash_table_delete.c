#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Hash table you want to add or update.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n_one;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		n_one = ht->array[i];
		while ((n_one) != NULL)
		{
			n_one = n_one->next;
			free(n_one->key);
			free(n_one->value);
			free(n_one);
		}
	}
	free(ht->array);
	free(ht);
}
