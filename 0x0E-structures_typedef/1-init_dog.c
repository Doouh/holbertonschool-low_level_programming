#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry opi
 * @d: check the code for Holberton School students.
 * @name: sad
 * @age: asdasd
 * @owner: asdasd
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
