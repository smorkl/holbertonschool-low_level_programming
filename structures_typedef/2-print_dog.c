#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - the function prints the dog structure
 * @d: the structure of the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
		printf("name: %s\n", d->name);

	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
		printf("Name: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
		printf("Name: %s\n", d->owner);
}
