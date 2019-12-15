#include "lists.h"
/**
 * add_dnodeint_end - Funtion that adds a new node at the end of a list.
 * @head: Head of the list.
 * @n: Item to be created and added to the list.
 * Return: The new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->next = NULL;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
