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
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
