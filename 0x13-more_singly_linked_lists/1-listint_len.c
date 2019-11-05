#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 *@h: Head.
 * Return: N of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int b = 0;

	while (h != NULL)
	{
		h = h->next;
		b++;
	}
	return (b);
}
