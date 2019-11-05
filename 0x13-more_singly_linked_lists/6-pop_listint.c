#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - entry point
 * @head: list_t variable
 *
 * Return: list_t variable
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tm;

	if ((*head) == NULL)
	{
		return (0);
	}
	else
	{
		tmp = (*head);
		tm = (*head)->n;
		(*head) = (*head)->next;
		free(tmp);
		return (tm);
	}
}
