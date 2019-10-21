#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: sadsad
 * @age: sadasd
 * @owner: sadsa
 *
 * Return: nd
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (!nd)
		return (NULL);
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
