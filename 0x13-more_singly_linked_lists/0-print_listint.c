#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - entry point
 * @h: list_t variable
 *
 * Return: size_t
*/

size_t print_listint(const listint_t *h)
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
