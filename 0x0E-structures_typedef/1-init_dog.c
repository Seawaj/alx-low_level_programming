#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog struct
 *
 * @d: pointer
 * @name: init name
 * @age: init age
 * @owner: init owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
