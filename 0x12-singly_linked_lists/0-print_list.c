#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*
*
*
*/
size_t print_list(const list_t *h)
{
        size_t i = 0;
	list_t *a;

	a = h;
	while (a != NULL)
	{
		if (a->str == NULL)
		{

			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", a->len, a->str);
		a = a->next;
		i++;
	}
	return (i);
}
