#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - entry point
 * @head: listint_t variable
 * @index: unsigned int variable
 *
 * Return: int variable
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = (*head), *aux;
	unsigned int i = 0;

	if ((*head) == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	else
	{
		while (i < (index - 1) && tmp->next != NULL)
		{
			i++;
			tmp = tmp->next;
		}

		if (i < index && tmp->next == NULL)
		{
			return (-1);
		}
		else
		{
			aux = tmp->next;
			tmp->next = aux->next;
			free(aux);
			return (1);
		}
	}
}
