#include "hash_tables.h"
/**
 * hash_djb2 - Function implementing the djb2 algorithm.
 * @str: String.
 * Return: Djb2 hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = hash * 33 + c;
	}

	return (hash);
}
