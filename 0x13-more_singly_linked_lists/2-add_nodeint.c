#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function that return the number of elements on listint_t.
 *@h: Head.
 * Return: N of nodes.
 */
 listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a = malloc(sizeof(listint_t));

	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = *head;
	*head = a;

	return (*head);
}
