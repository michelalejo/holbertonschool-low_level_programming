#include "lists.h"
/**
 * add_dnodeint_end - Funtion that adds a new node at the end of a list.
 * @head: Head of the list.
 * @n: Item to be created and added to the list.
 * Return: The new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int count = 0;
	dlistint_t *temp = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	for (count = 0; temp != NULL; count++)
	{
		if (temp->next == NULL)
		{
			new->n = n;
			temp->next = new;
			new->next = NULL;
			new->prev = temp;
		}
		temp = temp->next;
	}
	return (new);
}
