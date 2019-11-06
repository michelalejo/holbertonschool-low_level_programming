#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete a node at index of listint_t.
 *@head: Head.
 *@index: Indexs.
 * Return: address of nodes.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *a;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		if (!((*head)->next))
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		free(*head);
		*head = (*head)->next;
		return (1);
	}

	a = *head;

	for (i = 0; a && i < index; i++)
	{
		if (i == index - 1)
		{
			if (a->next)
			{
				free(a->next);
				a->next = (a->next)->next;
				return (1);
			}
		}
		a = a->next;
	}
	return (-1);
}
