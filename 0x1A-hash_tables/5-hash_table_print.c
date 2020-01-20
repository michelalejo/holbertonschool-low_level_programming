#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table you want to add or update.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *arr = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", arr, tmp->key, tmp->value);
			arr = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
