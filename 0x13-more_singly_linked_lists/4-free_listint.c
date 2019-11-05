#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - entry point
 * @head: list_t
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head->next)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
	free(head);
}
