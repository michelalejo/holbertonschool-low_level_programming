#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Function that adds a node on beginning of listint_t.
 *@head: Head.
 *@index: Indexs.
 * Return: address of nodes.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *a, *b;

	i = 0;
	b = *head;
	a = malloc(sizeof(listint_t));
	if (a == NULL)

		if (index == 0)
		{
			a->next = b;
			*head = a;
		}

	while (i < (index - 1))
	{
		if (b == NULL)
		{
			free(a);
		}
		b = b->next;
		i++;
	}
	a->next = b->next;
	b->next = a;
	return (0);
}
