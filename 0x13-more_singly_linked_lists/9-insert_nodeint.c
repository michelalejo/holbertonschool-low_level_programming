#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Function that inserts a node at a given position
 *@head: Head.
 *@idx: indexs.
 *@n: Numbers.
 * Return: address of nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *a, *b;

	node = *head;
	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	if (idx == 0)
	{
		a->next = b;
		*head = a;
		return (a;
	}

	while (i < (idx - 1))
	{
		if (b == NULL)
		{
			free(a);
			return (NULL);
		}
		b = b->next;
		i++;
	}
		a->next = b->next;
		b->next = a;
		return (a);
}
