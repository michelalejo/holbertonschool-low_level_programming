#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 *@head: Head.
 * Return: address of nodes.
 */
void free_listint2(listint_t **head)
{
	if (!head)
	{
		return;
	}

	if ((*head)->next)
	{
		free_listint2((*head)->next);
	}
	free(*head);
	*head = NULL;
}
