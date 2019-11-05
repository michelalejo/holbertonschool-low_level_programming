#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node on the end of listint_t.
 *@head: Head.
 *@n: Numbers.
 * Return: address of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *b;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);


	a->n = n;
	a->next = NULL;

	if (*head == NULL)
		*head = a;
	else
	{
		b = *head;
		while (b->next != NULL)
		{
			b = b->next;
		}
		b->next = a;
	}
	return (*head);
}
