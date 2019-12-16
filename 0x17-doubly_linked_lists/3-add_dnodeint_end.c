#include "lists.h"

/**
 * add_dnodeint_end - entry point
 * @head: dlistint_t variable
 * @n: int variable
 *
 * Return: dlistint_t variable
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = new;
		new->prev = *head;
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
	}
	return (new);
}
