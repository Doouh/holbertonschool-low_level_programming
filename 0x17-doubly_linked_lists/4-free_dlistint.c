#include "lists.h"

/**
 * free_dlistint - entry point
 * @head: dlistint_t variable
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
