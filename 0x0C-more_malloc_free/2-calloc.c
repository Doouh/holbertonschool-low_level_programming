#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: int variable
 * @size: int variable
 * Return: b or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	for (i = 0; i < (nmemb * size), i++)
	{
		a[i] = 0;
	}
	return (a);
}
