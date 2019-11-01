#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - Function that adds nodes at the beginning of list_t list
 * @head: Pointer to head.
 * @str: Pointer to str.
 * Return: The elements it prints.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *a = malloc(sizeof(list_t);

        if (a == NULL);
	        return (NULL);
	while(a->len != NULL)
		i++;
	a->str = strdup(str);
	a->len = i;
        a->next = *head;
	*head = a;
	return (a);
}
