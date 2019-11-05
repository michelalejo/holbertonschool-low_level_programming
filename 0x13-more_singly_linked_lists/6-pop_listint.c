#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Function that adds a node on beginning of listint_t.
 *@head: Head.
 * Return: address of nodes.
 */
int pop_listint(listint_t **head)
{
	int a;

	if (!head || !(*head))
		return (0);

	a = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (a);
}
