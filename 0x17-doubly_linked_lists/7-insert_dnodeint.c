#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node in a position.
 * @h: Head of the list.
 * @idx: Index.
 * @n: Item to be created and added to the list.
 * Return: The new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *prev = *h;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (h == NULL)
		return (0);
	if (*h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (count = 0; prev != NULL && count < idx; count++)
	{
		temp = prev, prev = prev->next;
	}
	if (prev != NULL || count == idx)
	{
		new->n = n;
		if (idx != 0)
		{
			new->next = prev;
			new->prev = temp;
			temp->next = new;
			prev != NULL ? prev->prev = new : prev;
		}
		else
		{
			new->next = *h;
			new->prev = NULL;
			*h != NULL ? (*h)->prev = new : *h;
			*h = new;
		}
		return (new);
	}
	return (NULL);
}
