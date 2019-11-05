#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end of a list_t.
 * @head: Pointer to head.
 * @str: Pointer to str.
 * Return: The elements it prints.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *a, *b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
		i++;
	a->str = strdup(str);
	a->len = i;
	a->next = NULL;

	if (*head != NULL)
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}
	else
	{
		*head = a;
	}
	return (a);
}
