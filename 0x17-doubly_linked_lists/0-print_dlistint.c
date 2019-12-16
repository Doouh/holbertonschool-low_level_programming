#include "lists.h"

/**
 * print_dlistint - entry point
 * @h: dlistint_t variable
 *
 * Return: size_t variable
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
