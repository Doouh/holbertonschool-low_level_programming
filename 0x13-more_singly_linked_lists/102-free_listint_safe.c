#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - entry point
 * @h: listint_t variable
 *
 * Return: size_t variable
*/

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_t *last = (*h)->next;

	while ((*h) != NULL && last < (*h))
	{
		last = (*h)->next;
		free(*h);
		n++;
		(*h) = last;
	}
	if ((*h) != NULL)
	{
		last = (*h);
		free(*h);
		(*h) = last->next;
		n++;
	}
	else
		free(*h);
	(*h) = NULL;
	return (n);
}
