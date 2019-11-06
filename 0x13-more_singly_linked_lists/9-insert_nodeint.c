#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a node at a given position
 *@head: Head.
 *@idx: indexs.
 *@n: Numbers.
 * Return: address of nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a, *b;

	a = malloc(sizeof(listint_t));
	if (!a || (!(*head) && idx > 0))
		return (NULL);

	a->n = n;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}

	b = *head;

	for (i = 0; b && i < idx; i++)
	{
		if (i == idx - 1)
		{
			a->next = b->next;
			b->next = a;
			return (a);
		}
		b = b->next;
	}
	free(a);
	return (NULL);
}
