#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a list.
 * @head: Head of the list.
 * Return: Sume of the list or 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
