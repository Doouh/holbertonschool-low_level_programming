#include "lists.h"

/**
 * add_dnodeint - entry point
 * @head: dlistint_t variable
 * @n: int variable
 *
 * Return: dlistint_t variable
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
