#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Function that prints a name.
 *@f: Funtion.
 *@name: Name to be print.
 *Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, a;

	a = size;
	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < a; i++)
		action(array[i]);
}
