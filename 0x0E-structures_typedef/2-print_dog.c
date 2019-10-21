#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (!d)
		;
	else
	{
		if (!(*d).name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(*d).age)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (!(*d).owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
