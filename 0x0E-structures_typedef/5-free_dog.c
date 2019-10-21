#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * @d: sadasd
 */

void free_dog(dog_t *d)
{
	if (!d)
		;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
