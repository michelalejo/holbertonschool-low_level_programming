#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Function that adds a node on beginning of listint_t.
 *@head: Head.
 *@n: Numbers.
 * Return: address of nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *a;

	if (!head)
	{
		return (NULL);
	}

	a = head;

	for (i = 0; a; i++)
	{
		if (i == index)
			return (a);
		a = a->next;
	}

	return (NULL);
}
