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

/**
 * insert_dnodeint_at_index - entry point
 * @h: dlistint_t variable
 * @idx: unsigned int variable
 * @n: int variable
 *
 * Return: dlistint_t variable
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int i = 0;

	if (((*h) == NULL && idx != 0) || (idx > (dlistint_len(*h) + 1)))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*h) == NULL)
		return (add_dnodeint(h, n));
	if (idx == (dlistint_len(*h) + 1))
		return (add_dnodeint_end(h, n));
	while (*h != NULL)
	{
		if (i == idx - 1)
		{
			new->next = (*h)->next;
			new->prev = (*h);
			(*h)->next = new;
			new->next->prev = new;
			while ((*h)->prev != NULL)
				*h = (*h)->prev;
			return (new);
		}
		*h = (*h)->next;
		i++;
	}
	return (NULL);

}
