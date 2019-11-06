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
	listint_t *a;
	unsigned int b;

	i = 0;
	a = head;
	if (head != NULL)
	{
		while (a && b < index)
		{
			a = a->next;
			b++;
		}
		return (a);
	}
	return (0);
}
