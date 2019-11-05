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
	listint_t *a = h;
	int b;

	while (a != NULL)
	{
		printf("%d", a->n)
		a = a->next
		b++;
	}
	printf("\n"))
	return (b);
}
