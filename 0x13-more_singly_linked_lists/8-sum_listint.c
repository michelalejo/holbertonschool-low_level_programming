#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Function that the summ of all data(n).
 *@head: Head.
 * Return: address of nodes.
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;

	if (!head)
		return (i);

	if (head->next)
		i += sum_listint(head->next);

	i += head->n;
	return (i);
}
