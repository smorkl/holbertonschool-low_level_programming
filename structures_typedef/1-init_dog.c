#include "dog.h"
#include <stdio.h>

/**
 * init_dog - the function initialize the variable of type struct dog
 * @d: inicializate dog
 * @name: the name of dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
