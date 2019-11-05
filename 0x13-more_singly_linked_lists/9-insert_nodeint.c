#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - entry point
 * @head: listint_t variable
 * @idx: unsigned int variable
 * @n: int variable
 *
 * Return: listint_t variable
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = (*head);
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx != 0)
	{
		while (i < (idx - 1) && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}

		if (i != (idx - 1) && tmp == NULL)
			return (NULL);

		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	else
	{
		new->next = (*head);
		(*head) = new;
		return ((*head));
	}
}
