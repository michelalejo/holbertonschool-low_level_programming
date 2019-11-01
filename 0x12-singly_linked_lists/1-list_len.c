#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: Pointer to head.
 * Return: The elements it prints.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t *a;

	a = (list_t *)h;
	while (a != NULL)
	{

		a = a->next;
		i++;
	}
	return (i);
}
