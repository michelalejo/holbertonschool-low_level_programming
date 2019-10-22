#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *init_dog - Function that initialize a variable of type struct dog.
 *@d: Pointer.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, k, a;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	d->name = malloc(sizeof(char) * i + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (k = 0; k < (i + 1); k++)
		d->name[k] = name[k];
	d->age = age;
	d->owner = malloc(sizeof(char) * (j + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (a = 0; a < (j + 1); a++)
		d->owner[a] = owner[a];
	return (d);
}
