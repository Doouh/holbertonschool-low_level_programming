#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: int variable
 * @size: int variable
 * Return: b or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	while (a[i])
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
