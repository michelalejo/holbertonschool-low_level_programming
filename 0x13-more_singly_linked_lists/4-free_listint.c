#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 *@head: Head.
 * Return: address of nodes.
 */
void free_listint(listint_t *head)
{
        if (!head)
{
                return;
}

        if (head->next)
{
                free_list(head->next);
}

        free(head);
}
