#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - entry point
 * @head: listint_t variable
 *
 * Return: listint variable
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *haunter;

	if ((*head) == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	aux = (*head);
	(*head) = (*head)->next;
	aux->next = NULL;

	while ((*head))
	{
		haunter = (*head);
		(*head) = (*head)->next;
		haunter->next = aux;
		aux = haunter;
	}
	(*head) = aux;
	return (aux);
}
