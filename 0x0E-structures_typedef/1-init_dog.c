#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: structure characteristics
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name)
	{
		strcpy(d->name, name);
	}
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner)
	{
		strcpy(d->owner, owner);
	}
}
