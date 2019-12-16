#include "lists.h"

/**
 * dlistint_len - entry point
 * @h: dlistint_t variable
 *
 * Return: size_t variable
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
		i++, h = h->next;
	return (i);
}
