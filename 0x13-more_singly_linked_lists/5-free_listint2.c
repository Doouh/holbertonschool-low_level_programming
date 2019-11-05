#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - entry point
 * @head: list_t
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{

		while ((*head)->next)
		{
			tmp = (*head);
			free(*head);
			(*head) = tmp->next;
		}
		free(*head);
		(*head) = NULL;
	}
}
