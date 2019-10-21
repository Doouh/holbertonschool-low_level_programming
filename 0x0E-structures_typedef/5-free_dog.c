#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * @d: sadasd
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	d->age = 0;
	free(d);
}
