#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - entry point
 * @head: list_t
*/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		free(head);
		head = tmp->next;
		tmp = tmp->next;
	}
	free(head);
}
