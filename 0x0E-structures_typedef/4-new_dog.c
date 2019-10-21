#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - entry point
 * @name: sadsad
 * @age: sadasd
 * @owner: sadsa
 *
 * Return: nd
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int i = 0;

	if (!name)
		name = "";
	if (!owner)
		owner = "";

	nd = malloc(sizeof(dog_t));
	if (!nd)
		return (NULL);
	while (name[i])
		i++;
	nd->name = (char *)malloc(i + 1);
	if (!(nd->name))
	{
		free(nd);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		nd->name[i] = name[i];
		i++;
	}
	nd->name[i] = '\0';
	i = 0;

	while (owner[i])
		i++;
	nd->owner = (char *)malloc(i + 1);
	if (!(nd->owner))
	{
		free(nd->name);
		free(nd);
	}
	i = 0;
	while (owner[i])
	{
		nd->owner[i] = owner[i];
		i++;
	}
	nd->owner[i] = '\0';
	nd->age = age;
	return (nd);
}
