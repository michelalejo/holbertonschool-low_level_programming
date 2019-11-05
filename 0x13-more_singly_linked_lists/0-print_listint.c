#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 *@h: Head.
 * Return: void
 size_t print_listint(const listint_t *h)
{
	int b;

	while (h != NULL)
	{
		printf("%d", h->n)
		h = h->next
		b++;
	}
	printf("\n"))
	return (b);
}
