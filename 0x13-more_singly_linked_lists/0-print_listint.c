#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function that prints all the elements on listint_t.
 *@h: Head.
 * Return: N of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int b = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		b++;
	}
	return (b);
}
