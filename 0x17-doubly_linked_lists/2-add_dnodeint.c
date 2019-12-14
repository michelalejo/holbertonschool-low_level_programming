#include "lists.h"
/**
 * add_dnodeint - Funtion that adds a new node at the beginning of a list.
 * @head: Head of the list.
 * @n: Item to be created and added to the list.
 * Return: The new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
