#include "lists.h"
#include <stdio.h>

/**
 * list_len - entry point
 * @h: list_t variable
 *
 * Return: size_t variable
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
