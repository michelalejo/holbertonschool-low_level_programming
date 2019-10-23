#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Function that prints a name.
 *@f: Funtion.
 *@name: Name to be print.
 *Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
