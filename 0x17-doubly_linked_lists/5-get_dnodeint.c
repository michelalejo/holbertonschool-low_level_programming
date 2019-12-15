#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of a list.
 * @head: Head of the list.
 * @index: Place of the list.
 * Return: Head or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (head != NULL)
	{
		while (count < index && head != NULL)
		{
			head = head->next;
			count++;
		}
		return (head);
	}
	return (NULL);
}
