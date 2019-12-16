#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at index on list.
 * @head: Head of the list.
 * @index: Index.
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old, *h;
	unsigned int i = 0;

	old = *head;
	if (old == NULL)
		return (-1);
	for (; i < index
		     && old != NULL; i++,
		     h = old, old = old->next)
		;
	if (old != NULL)
	{
		free(old);
		old = old->next;
		if (i != 0)
		{
			if (old != NULL)
				old->prev = h;
			h->next = old;
		}
		else
		{
			if (old != NULL)
				old->prev = NULL;
			*head = old;
		}
		return (1);
	}
	return (-1);
}
