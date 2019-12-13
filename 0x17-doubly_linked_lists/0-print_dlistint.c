#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a list.
 * @h: Head of the list.
 * Return: The times it prints.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
