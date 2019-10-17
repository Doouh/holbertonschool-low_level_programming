#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - entry point
 *
 * @b: unsigned int variable
 *
 * Return: a
*/

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
