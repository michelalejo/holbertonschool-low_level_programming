#include "lists.h"
/**
 * dlistint_len - Funtion that returns the number of elements of a list.
 * @h: Head of the list.
 * Return: The times it prints.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
