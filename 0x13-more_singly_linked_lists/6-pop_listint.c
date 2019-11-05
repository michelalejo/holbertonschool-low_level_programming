#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t.
 *@head: Head.
 * Return: head node data.
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
