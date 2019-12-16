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
 * delete_dnodeint_at_index - entry point
 * @h: dlistint_t variable
 * @idx: unsigned int variable
 *
 * Return: int variable
*/

int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *aux;
	unsigned int i = 0;

	if (((*h) == NULL) || (idx > (dlistint_len(*h) + 1)) || h == NULL)
		return (-1);
	aux = *h;
	if (idx == 0 && dlistint_len(*h) > 1)
	{
		*h = (*h)->next;
		(*h)->prev = NULL;
		free(aux);
		return (1);
	}
	if (idx == (dlistint_len(*h)))
	{
		while (aux->next)
			aux = aux->next;
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	while (*h != NULL && dlistint_len(*h) > 1)
	{
		if (i == idx)
		{
			(*h)->prev->next = (*h)->next;
			(*h)->next->prev = (*h)->prev;
			free(*h);
			*h = aux;
			return (1);
		}
		*h = (*h)->next, i++;
	}
	if (idx == 0 && (*h))
	{
		*h = NULL;
		free(*h);
		return (1);
	}
	return (-1);
}
