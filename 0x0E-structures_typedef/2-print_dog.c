#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print - prints a dog struct
 *
 * @d: pointer to dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, d->age, d->owner);
}
