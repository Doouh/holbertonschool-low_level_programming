#include <stdlib.h>

/**
 * create_array - entry point.
 * @size: unsigned int variable
 * @c: char variable
 *
 * Return: ar or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ar = malloc(size);
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
