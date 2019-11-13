#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - entry point
 * @head: listint_t variable
 *
 * Return: listint variable
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *last = head;

	while (head != NULL && last > head->next)
	{
		last = head;
		head = head->next;
	}
	if (head != NULL)
	{
		head = head->next;
		return (head);
	}
	else
		return (NULL);
}
