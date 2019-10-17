#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - entry point
 * @ptr: void variable
 * @old_size: unsigned int variable
 * @new_size: unsigned int variable
 *
 * Return: ptr or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	while (((char *)ptr)[i] && i < new_size)
	{
		ar[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (ar);
}
