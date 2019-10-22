#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Function that initialize a variable of type struct dog.
 *@d: Pointer.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return "";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = "(nil)";
	}
	printf("Name: %s\n",d->name);
	printf("Age: %s\n",d->age);
	printf("Owner: %s\n",d->owner);
}
