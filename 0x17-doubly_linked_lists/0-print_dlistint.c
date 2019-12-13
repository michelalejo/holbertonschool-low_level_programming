#include "lists.h"
/**
 * add_dnodeint - Funtion that adds a new node at the beginning of a list.
 * @head: Head of the list.
 * @n: Item to be created and added to the list.
 * Return: The new node.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	for(count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
