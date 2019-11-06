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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

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

	tmp = *head;

	for (i = 0; tmp && i < index; i++)
	{
		if (i == index - 1)
		{
			if (tmp->next)
			{
				free(tmp->next);
				tmp->next = (tmp->next)->next;
				return (1);
			}
		}
		tmp = tmp->next;
	}
	return (-1);
}
