#include "lists.h"
/**
 *free_dlistint - Funtion that frees a list.
 * @head: Head of the list.
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
